#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Emoji {

class ChatRichTextBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Emoji", "ChatRichTextBase"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ContentWidget() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& HeadIcon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& TimeWidget() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& TimeLabel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& LadderIcon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& BRLadderIcon() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& AvatarBtn() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& BackgroundSprite() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& TextHtml() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& TextHtmlBoxcollider() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& VoiceFlagBoxcollider() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& BackgroundBoxcollider() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& VoiceTimeLabel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& voicePlayFlowObj() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& VoiceProgress() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& ProgressBarForeground() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& ProgressBarBackground() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& Horn() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint64_t> T& playerID() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& isSender() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& menuBarPlayerInfo() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& cacheMessageInfo() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& TranslateBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Original() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Translating() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Translated() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& TranslatedLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& translateLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& translatedLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& bTranslate() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& RowIndex() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SampleTextArray() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAwake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CellAdapt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTranslateLabelLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTranslateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTranslateBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestTranslate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestTranlateTextLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRichText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTranslatedText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLadderIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T OnAwake() {
		return ((T (*)(ChatRichTextBase*))(Il2CppBase() + 0x4BC209C))(this);
	}
	template <typename T = void> T CellAdapt(float xOffset) {
		return ((T (*)(ChatRichTextBase*, float))(Il2CppBase() + 0x4BC2418))(this, xOffset);
	}
	template <typename T = void> T OnAvatarBtnClick() {
		return ((T (*)(ChatRichTextBase*))(Il2CppBase() + 0x4BC2590))(this);
	}
	template <typename T = int32_t> T GetTranslateLabelLength(uintptr_t TextState) {
		return ((T (*)(ChatRichTextBase*, uintptr_t))(Il2CppBase() + 0x4BC27D4))(this, TextState);
	}
	template <typename T = void> T SetTranslateState(uintptr_t TextState) {
		return ((T (*)(ChatRichTextBase*, uintptr_t))(Il2CppBase() + 0x4BC28FC))(this, TextState);
	}
	template <typename T = void> T OnTranslateBtnClick() {
		return ((T (*)(ChatRichTextBase*))(Il2CppBase() + 0x4BC2A30))(this);
	}
	template <typename T = uintptr_t> T RequestTranslate() {
		return ((T (*)(ChatRichTextBase*))(Il2CppBase() + 0x4BC2C70))(this);
	}
	template <typename T = uintptr_t> T RequestTranlateTextLanguage() {
		return ((T (*)(ChatRichTextBase*))(Il2CppBase() + 0x4BC2D58))(this);
	}
	template <typename T = void> T Configure(uintptr_t mode, uintptr_t picInfo, int32_t row, uintptr_t mCutPanel, float contentOffset, float timeOffset) {
		return ((T (*)(ChatRichTextBase*, uintptr_t, uintptr_t, int32_t, uintptr_t, float, float))(Il2CppBase() + 0x4BC2E40))(this, mode, picInfo, row, mCutPanel, contentOffset, timeOffset);
	}
	template <typename T = void> T SetRichText(uintptr_t mode) {
		return ((T (*)(ChatRichTextBase*, uintptr_t))(Il2CppBase() + 0x4BC422C))(this, mode);
	}
	template <typename T = void> T SetTranslatedText(uintptr_t Lang) {
		return ((T (*)(ChatRichTextBase*, uintptr_t))(Il2CppBase() + 0x4BC4438))(this, Lang);
	}
	template <typename T = void> static T SetLadderIcon(int32_t ladder, uintptr_t icon, bool isBR) {
		return ((T (*)(void *, int32_t, uintptr_t, bool))(Il2CppBase() + 0x4BC3E14))(0, ladder, icon, isBR);
	}
	template <typename T = void> T xLuaBaseProxy_OnAwake() {
		return ((T (*)(ChatRichTextBase*))(Il2CppBase() + 0x4BC4A0C))(this);
	}

};

}
