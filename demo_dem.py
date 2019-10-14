import pygame
import collections 
import random

square=[]
def corner_grid(square_no):
    square_no-=1
    count=0
    sum=0
    index=[-11,-9,9,11]
    for i in index:
        try:
            val = square[square_no+i].intensity
            count+=1
        except IndexError:
            val =0
        sum+=val
    avg=sum/count
    return avg

def green_middle(square_no):
    square_no-=1
    count=0
    sum=0
    index=[-11,-9,0,9,11]
    for i in index:
        try:
            val = square[square_no+i].intensity
            count+=1
        except IndexError:
            val =0
        sum+=val
    avg=sum/count
    return avg

def checkRed(square_no):
    square_no-=1
    try:
        colour = square[square_no-1].colour
    except IndexError:
        colour = square[square_no+1].colour
    if colour=='red':
        return True
    else:
        return False

def middle(square_no):
    square_no-=1
    count=0
    sum=0
    index=[-10,-1,+1,+10]
    for i in index:
        try:
            val = square[square_no+i].intensity
            count+=1
        except IndexError:
            val =0
        sum+=val
    avg=sum/count
    return avg

def gLeft(square_no):
    square_no-=1
    count=0
    sum=0
    index=[-1,+1]
    for i in index:
        try:
            val = square[square_no+i].intensity
            count+=1
        except IndexError:
            val =0
        sum+=val
    avg=sum/count
    return avg

def gUp(square_no):
    square_no-=1
    count=0
    sum=0
    index=[-10,+10]
    for i in index:
        try:
            val = square[square_no+i].intensity
            count+=1
        except IndexError:
            val =0
        sum+=val
    avg=sum/count
    return avg

BLUE = (0, 0, 255)
BLACK = (0,0,0)
WHITE = (255,255,255)
RED = (255,0,0)
GREEN = (0,255,0)
 
pygame.init()

size = (700, 400)
screen = pygame.display.set_mode(size)
clock = pygame.time.Clock()
font = pygame.font.Font('freesansbold.ttf', 12)

screen.fill(BLACK)

y=50
x=40
width = 300
height = 300
i=50
j=50
row=1
col=1
intensity=0
s_info = collections.namedtuple('s_info',['square_no','colour','intensity']) 

pygame.draw.rect(screen, BLUE,(x,y,width,height),2) #drawing RGB image
for i in range (50,y+height,30):    
    for j in range (40,x+width,30):    
        square_no=(row-1)*10+col 
        intensity=random.randint(0,255) 
        if row % 2 !=0 and col % 2 !=0:
            COLOUR = (intensity,0,0) #RED
            s=s_info(square_no,'red',intensity)    
        elif row % 2 ==0 and col % 2 ==0:
            COLOUR = (0,0,intensity) #BLUE
            s=s_info(square_no,'blue',intensity)    
        else:
            COLOUR = (0,intensity,0) #GREEN
            s=s_info(square_no,'green',intensity)        
        col+=1
        pygame.draw.rect(screen,COLOUR,(j,i,30,30)) 
        square.append(s) 
    row+=1
    col=1 
r=0
g=0
b=0
row=1
col=1

for i in range (50,50+height,30):
    for j in range (360,360+width,30):
        square_no=((row-1)*10+col)-1 
        if square[square_no].colour=='red':
                r=square[square_no].intensity 
                b=corner_grid(square_no) 
                g=middle(square_no) 
                COLOUR = (r,g,b)
               
        elif square[square_no].colour=='blue':
                r=corner_grid(square_no)
                g=middle(square_no)
                b=square[square_no].intensity
                COLOUR = (r,g,b)
        else:
            g=green_middle(square_no)
            if checkRed(square_no): 
                r=gLeft(square_no) #left and right is red
                b=gUp(square_no) # up and down is blue
            else:
                b=gLeft(square_no) 
                r=gUp(square_no) 
                COLOUR = (r,g,b)
        col+=1 
        pygame.draw.rect(screen,COLOUR,(j,i,30,30))
    row+=1
    col=1 
pygame.display.update()
#pygame.display.flip() 
pygame.time.wait(20000) 
   
pygame.quit()


"""
def gcorner_grid(square_no):
    square_no-=1
    count=0
    sum=0
    index=[-10,-1,+10,+1]
    for i in index:
        try:
            val = square[square_no+i].intensity
            count+=1
        except IndexError:
            val =0
        sum+=val
    avg=sum/count
    return avg
"""