if [ ! -f 32blit/vs/sdl/include/SDL_image.h ]; then
    curl https://libsdl.org/release/SDL2-devel-2.0.10-VC.zip -o SDL2.zip
    curl https://www.libsdl.org/projects/SDL_image/release/SDL2_image-devel-2.0.5-VC.zip -o SDL2_image.zip

    unzip SDL2.zip -d 32blit/vs/sdl
    unzip SDL2_image.zip -d 32blit/vs/sdl

    # move dirs up
    mv 32blit/vs/sdl/SDL2-2.0.10/* 32blit/vs/sdl
    cp -r 32blit/vs/sdl/SDL2_image-2.0.5/* 32blit/vs/sdl
fi
