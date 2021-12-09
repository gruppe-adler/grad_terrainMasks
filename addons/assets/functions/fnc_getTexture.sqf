params ["_object"];

if (isNull _object) exitWith {};

copyToClipboard surfaceTexture (getPos _object);