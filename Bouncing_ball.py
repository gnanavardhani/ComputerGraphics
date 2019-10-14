import pygame
import random 
BLACK = (0, 0, 0)
WHITE = (0, 155, 125)
class Ball:
    def __init__(self):
        self.x = 0
        self.y = 0
        self.radius = 0.0
        self.change_radius = 0 
        self.change_x = 0
        self.change_y = 0

def make_ball():

    ball = Ball()
    ball.x = 350 
    ball.y = 350 
    ball.radius = 5.0
    ball.change_x = 0
    ball.change_y = 3+random.randrange(-2, 3)
    ball.change_radius = 0.25
    return ball

def main():
    pygame.init()
    size = [700, 500]
    screen = pygame.display.set_mode(size)
 
    pygame.display.set_caption("Bouncing Balls")
    done = False
    clock = pygame.time.Clock()
    ball_list = []
 
    ball = make_ball()
    temp=1
    ball_list.append(ball)
    
    while not done:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                done = True
        temp+=1
        ball.y += ball.change_y
        if ball.y > (500 - 70) or ball.y < 50:
            ball.change_y *= -1
        if(ball.change_y>0):
            ball.radius=ball.radius+0.8
        elif (ball.change_y<=0):
            ball.radius=ball.radius+0.4

        screen.fill(BLACK)

        pygame.draw.circle(screen, WHITE, [ball.x, ball.y],int(ball.radius))
        clock.tick(60)
        pygame.display.flip()
 
    # Close everything down
    pygame.quit()
if __name__ == "__main__":
    main()
