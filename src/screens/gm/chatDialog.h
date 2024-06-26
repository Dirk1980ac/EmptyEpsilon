#ifndef CHAT_DIALOG_H
#define CHAT_DIALOG_H

#include "gui/gui2_resizabledialog.h"

class PlayerSpaceship;
class GuiTextEntry;
class GuiScrollText;
class GuiRadarView;

class GameMasterChatDialog : public GuiResizableDialog
{
public:
    GameMasterChatDialog(GuiContainer* owner, GuiRadarView* radar, int index);

    virtual void onDraw(sp::RenderTarget& target) override;
private:
    int player_index;
    P<PlayerSpaceship> player;
    GuiRadarView* radar;

    bool notification;

    GuiTextEntry* text_entry;
    GuiScrollText* chat_text;

    void disableComms(string title);

    void onClose() override;
};

#endif//CHAT_DIALOG_H
