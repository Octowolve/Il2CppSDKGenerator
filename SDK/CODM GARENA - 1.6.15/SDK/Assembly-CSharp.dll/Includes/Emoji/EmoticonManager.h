#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Emoji {

class EmoticonManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Emoji", "EmoticonManager"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& emoticonList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& matchEvaluator() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& ChatContentWidgetUpPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& ChatContentWidgetDownPos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& EmoticonSelectViewPostion() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& WorldCellLeftExtraOffset() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& WorldCellRightExtraOffset() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& CellLeftExtraOffset() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& CellRightExtraOffset() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& ChatBackgroundWidthOffset() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& ChatBackgroundHeightOffset() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& ChatBackgroundHeightOffset_Voice() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& CellTimeWidgetHight() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& ChatUIFlowTableHeightOffset() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& ChatUIFlowTableHeightOffset_Voice() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& EachChatLineWidth() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& EachEmoticonWidth() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& EachEmoticonHeight() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& ChatHtmlDepth() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInputEmoticon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChatHtmlString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceEmoticonInString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsContainEmoticonInString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceEmotionWithBlank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChatVoiceHtmlString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4BC3D00))(0);
	}
	template <typename T = Il2CppString*> T CheckInputEmoticon(Il2CppString* originText, int32_t cursorPosition, int32_t emotId) {
		return ((T (*)(EmoticonManager*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x4BCAB48))(this, originText, cursorPosition, emotId);
	}
	template <typename T = Il2CppString*> T GetChatHtmlString(Il2CppString* content, Il2CppString* color) {
		return ((T (*)(EmoticonManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4BC5714))(this, content, color);
	}
	template <typename T = Il2CppString*> T ReplaceEmoticonInString(uintptr_t match) {
		return ((T (*)(EmoticonManager*, uintptr_t))(Il2CppBase() + 0x4BCAE00))(this, match);
	}
	template <typename T = bool> T IsContainEmoticonInString(Il2CppString* content) {
		return ((T (*)(EmoticonManager*, Il2CppString*))(Il2CppBase() + 0x4BCB068))(this, content);
	}
	template <typename T = Il2CppString*> T ReplaceEmotionWithBlank(Il2CppString* OriginalText) {
		return ((T (*)(EmoticonManager*, Il2CppString*))(Il2CppBase() + 0x4BC4DB4))(this, OriginalText);
	}
	template <typename T = Il2CppString*> T GetChatVoiceHtmlString(int32_t time, Il2CppString* color) {
		return ((T (*)(EmoticonManager*, int32_t, Il2CppString*))(Il2CppBase() + 0x4BCB1FC))(this, time, color);
	}

};

}
