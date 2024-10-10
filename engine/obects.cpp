class gameObject{
    public:
        vector3 position;
        vector3 rotation;
        gameObject(){
            position = {0,0,0};
            rotation = {0,0,0};
        }
};
class camera: public gameObject{
    public:
        vector3 LocalisePos(vector3 other){
            vector3 out = {0,0,0};
            out.x = other.x - position.x;
            out.y = other.y - position.y;
            out.z = other.z - position.z;
            return out;
        }
        vector3 LocaliseRotation(vector3 other){

        }
};

class polygon : public gameObject{
    public:
        Color color;
        polygon(int nverts){
            vector3 verts[nverts];
        }
};