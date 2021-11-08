





def capture_img(imgpath):
    """ 
    from picamera import PiCamera
    from time import sleep
    
    camera = PiCamera()
    camera.resolution = (2592,1944) # 4:3 aspect ratio
    camera.start_preview()
    sleep(3)
    camera.capture(imgpath)
    camera.stop_pewview()

    params: 
        imgpath: Path to location to store the image. 
    """ 
