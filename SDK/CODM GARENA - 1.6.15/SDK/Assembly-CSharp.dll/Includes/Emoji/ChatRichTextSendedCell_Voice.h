#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Emoji {

class ChatRichTextSendedCellVoice
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Emoji", "ChatRichTextSendedCell_Voice"));
	}

	template <typename T = Il2CppVector3> T& TextHtmlOriginPosition() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& VoicePlayFlowDele() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& HeardFlag() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& ClickedVoicePlayFlow() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAwake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHtmlClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VoicePlayFlowCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRichText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PauseProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T OnAwake() {
		return ((T (*)(ChatRichTextSendedCellVoice*))(Il2CppBase() + 0x4BC897C))(this);
	}
	template <typename T = void> T OnHtmlClick(uintptr_t obj) {
		return ((T (*)(ChatRichTextSendedCellVoice*, uintptr_t))(Il2CppBase() + 0x4BC8C28))(this, obj);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ChatRichTextSendedCellVoice*))(Il2CppBase() + 0x4BC8D98))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ChatRichTextSendedCellVoice*))(Il2CppBase() + 0x4BC9004))(this);
	}
	template <typename T = void> T VoicePlayFlowCallback(bool voiceNeedPlay) {
		return ((T (*)(ChatRichTextSendedCellVoice*, bool))(Il2CppBase() + 0x4BC93D0))(this, voiceNeedPlay);
	}
	template <typename T = void> T Configure(uintptr_t mode, uintptr_t picInfo, int32_t row, uintptr_t mCutPanel, float contentOffset, float timeOffset) {
		return ((T (*)(ChatRichTextSendedCellVoice*, uintptr_t, uintptr_t, int32_t, uintptr_t, float, float))(Il2CppBase() + 0x4BC9774))(this, mode, picInfo, row, mCutPanel, contentOffset, timeOffset);
	}
	template <typename T = void> T SetRichText(uintptr_t mode) {
		return ((T (*)(ChatRichTextSendedCellVoice*, uintptr_t))(Il2CppBase() + 0x4BC992C))(this, mode);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(ChatRichTextSendedCellVoice*))(Il2CppBase() + 0x4BCA334))(this);
	}
	template <typename T = void> T StopProgress() {
		return ((T (*)(ChatRichTextSendedCellVoice*))(Il2CppBase() + 0x4BCA560))(this);
	}
	template <typename T = void> T PauseProgress() {
		return ((T (*)(ChatRichTextSendedCellVoice*))(Il2CppBase() + 0x4BC9264))(this);
	}
	template <typename T = void> T StartProgress() {
		return ((T (*)(ChatRichTextSendedCellVoice*))(Il2CppBase() + 0x4BC9540))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnAwake() {
		return ((T (*)(ChatRichTextSendedCellVoice*))(Il2CppBase() + 0x4BCA6AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Configure(uintptr_t P0, uintptr_t P1, int32_t P2, uintptr_t P3, float P4, float P5) {
		return ((T (*)(ChatRichTextSendedCellVoice*, uintptr_t, uintptr_t, int32_t, uintptr_t, float, float))(Il2CppBase() + 0x4BCA6B0))(this, P0, P1, P2, P3, P4, P5);
	}
	template <typename T = void> T xLuaBaseProxy_SetRichText(uintptr_t P0) {
		return ((T (*)(ChatRichTextSendedCellVoice*, uintptr_t))(Il2CppBase() + 0x4BCA6E0))(this, P0);
	}

};

}
