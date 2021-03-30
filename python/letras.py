def main():
	import pygame
	pygame.init()
	w=700
	h=500
	screen=pygame.display.set_mode((w,h))
	pygame.display.set_caption("Aliasing/Anti Aliasing")
	done=False
	screen.fill((255,255,255))
	pygame.display.flip()
	while(not done):
		for event in pygame.event.get():
			if(event.type==pygame.QUIT):
				print("Quit")
				done=True
		myFont=pygame.font.SysFont("Purisa",150,False,False)
		myText=myFont.render("Hello!!",False,(255,0,0))
		myText1=pygame.transform.rotate(myText,0)
		screen.blit(myText1,[300,200])
		#myText2=myFont.render("Hello!!",True,(0,255,0))
		#screen.blit(myText2,[300,300])
		myText2=pygame.transform.rotate(myText,90)
		screen.blit(myText2,[300,200])
		myText3=pygame.transform.rotate(myText,180)
		screen.blit(myText3,[300,200])
		myText4=pygame.transform.rotate(myText,270)
		screen.blit(myText4,[300,200])


		pygame.display.flip()
	pygame.quit()
main()

