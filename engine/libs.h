
class Color{
    private:
        uint8_t red;
        uint8_t green;
        uint8_t blue;
        uint32_t rgb;
    public:
        Color(){
            red = 0;
            green = 0;
            blue = 0;
            rgb = 0;
        }
        Color(int red_i, int green_i, int blue_i){
            red = red_i & 0xff;
            green = green_i & 0xff;
            blue = blue_i & 0xff;
            rgb = calc_rgb();
        }
        Color(uint32_t col){
            rgb = col;
            splitColor();
        }
        uint32_t calc_rgb(){
            uint32_t out =0;
            out = ((red << 16) &0xff0000)|((green << 8) &0x00ff00)|((blue) &0x0000ff);
            return out;
        }
    
        void splitColor(){
            red = (rgb >> (16))& 0xff;
            green = (rgb >> (8))& 0xff;
            blue = (rgb >> (0))& 0xff;
        }

        uint8_t getRed(){
            return red;
        }
        uint8_t getGreen(){
            return green;
        }
        uint8_t getBlue(){
            return blue;
        }
        uint32_t getrgb(){
            return rgb;
        }
};  

#include "libs.cpp"