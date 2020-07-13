#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatQTFilterCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatQTFilterCell"));
	}

	template <typename T = uintptr_t> T& TimeRoot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& TimeLabel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& PlayerFrame() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& LanguageLabel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& Microphone() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& DelayLabel() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& DelayIcon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& FeatureOnly() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& BgSprite() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& ModeIcon() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& ModeLabel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& PlayerNumLabel() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& JoinBtn() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& LevelRequiredRoot() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& LevelRequiredLabel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& LadderRequiredRoot() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& MinLadderIcon() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& MaxLadderIcon() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& MinLadderLabel() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& MaxLadderLabel() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& BcContainer() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& BcModeIcon() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& BcBgSprite() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& BcModeLabel() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& BcJoinBtn() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_Info() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_FxPanelInit() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_LastClickTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint32_t> T& m_WorldTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uint32_t> T& m_GuildTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& m_TimeWidgetHeight() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_IsBroadcast() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_SpvpLadderDS() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_BRLadderDS() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_ChatDataStore() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAwake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureFilterCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureBroadcastCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureModeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FakeShowPing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLadderLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerFrameClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnJoinBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_SpvpLadderDS() {
		return ((T (*)(ChatQTFilterCell*))(Il2CppBase() + 0x1D5BD90))(this);
	}
	template <typename T = uintptr_t> T get_BRLadderDS() {
		return ((T (*)(ChatQTFilterCell*))(Il2CppBase() + 0x1D5BE40))(this);
	}
	template <typename T = uintptr_t> T get_ChatDataStore() {
		return ((T (*)(ChatQTFilterCell*))(Il2CppBase() + 0x1D5BEF0))(this);
	}
	template <typename T = void> T OnAwake() {
		return ((T (*)(ChatQTFilterCell*))(Il2CppBase() + 0x1D5BFA0))(this);
	}
	template <typename T = void> T Configure(uintptr_t mode, uintptr_t cutPanel, bool isBroadcast) {
		return ((T (*)(ChatQTFilterCell*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1D2476C))(this, mode, cutPanel, isBroadcast);
	}
	template <typename T = void> T ConfigureFilterCell(uintptr_t mode, uintptr_t cutPanel) {
		return ((T (*)(ChatQTFilterCell*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D5C484))(this, mode, cutPanel);
	}
	template <typename T = void> T ConfigureBroadcastCell(uintptr_t mode) {
		return ((T (*)(ChatQTFilterCell*, uintptr_t))(Il2CppBase() + 0x1D5C358))(this, mode);
	}
	template <typename T = void> T ConfigureModeInfo(uintptr_t mode, bool isBroadcast) {
		return ((T (*)(ChatQTFilterCell*, uintptr_t, bool))(Il2CppBase() + 0x1D5C90C))(this, mode, isBroadcast);
	}
	template <typename T = void> T FakeShowPing(uint32_t ping) {
		return ((T (*)(ChatQTFilterCell*, uint32_t))(Il2CppBase() + 0x1D5D658))(this, ping);
	}
	template <typename T = void> T SetLadderLimit(uintptr_t label, uintptr_t sprite, uintptr_t conf) {
		return ((T (*)(ChatQTFilterCell*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D5D490))(this, label, sprite, conf);
	}
	template <typename T = void> T OnPlayerFrameClick(uintptr_t obj) {
		return ((T (*)(ChatQTFilterCell*, uintptr_t))(Il2CppBase() + 0x1D5D8D8))(this, obj);
	}
	template <typename T = void> T OnJoinBtnClick() {
		return ((T (*)(ChatQTFilterCell*))(Il2CppBase() + 0x1D5DC24))(this);
	}
	template <typename T = void> T OnAwakem__0(uintptr_t obj) {
		return ((T (*)(ChatQTFilterCell*, uintptr_t))(Il2CppBase() + 0x1D5E198))(this, obj);
	}
	template <typename T = void> T xLuaBaseProxy_OnAwake() {
		return ((T (*)(ChatQTFilterCell*))(Il2CppBase() + 0x1D5E19C))(this);
	}

};

}
