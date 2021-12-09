class ctrlMenu;
class Display3DEN {
    class ContextMenu: ctrlMenu {
        class Items {
            class Log {
                items[] = {"LogPosition", "LogClasses", "GRAD_getLoadoutsFromUnits"};
            };
            class GRAD_getTexture {
                text = CSTRING();
                action = QUOTE([] call FUNC(getObjectTexture));
                conditionShow = "selectedObject";
                value = 0;
            };
        };
    };
};