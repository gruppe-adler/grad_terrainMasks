params ["_object"];

if (isNull _object) exitWith {};

_object setObjectTextureGlobal [0, surfaceTexture (getPos _object)];