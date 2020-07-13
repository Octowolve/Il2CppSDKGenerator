#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRBroadcastTipsHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRBroadcastTipsHandler"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommonBroadcast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowCommonBroadcast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_ShowCommonBroadcast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommonBroadcastWithLOCID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBroadcastAppendPlayerName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowBroadcastAppendPlayerName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBroadcastAppendSubIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBroadcastForamt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> static T ShowCommonBroadcast(uint32_t styleId) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x35C53B0))(0, styleId);
	}
	template <typename T = void> static T ShowCommonBroadcast_1(uint32_t styleId, Il2CppString* text) {
		return ((T (*)(void *, uint32_t, Il2CppString*))(Il2CppBase() + 0x35C553C))(0, styleId, text);
	}
	template <typename T = void> static T ShowCommonBroadcast_2(Il2CppString* text, Il2CppString* iconSpriteName, uint32_t tintColor, float showTime) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uint32_t, float))(Il2CppBase() + 0x35C5710))(0, text, iconSpriteName, tintColor, showTime);
	}
	template <typename T = void> static T ShowCommonBroadcastWithLOCID(Il2CppString* LOCID, Il2CppString* iconSpriteName, uint32_t tintColor, float showTime) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uint32_t, float))(Il2CppBase() + 0x35C5A18))(0, LOCID, iconSpriteName, tintColor, showTime);
	}
	template <typename T = void> static T ShowBroadcastAppendPlayerName(Il2CppString* text, uint32_t playerID, Il2CppString* iconSpriteName, uint32_t tintColor, float showTime) {
		return ((T (*)(void *, Il2CppString*, uint32_t, Il2CppString*, uint32_t, float))(Il2CppBase() + 0x35C5D34))(0, text, playerID, iconSpriteName, tintColor, showTime);
	}
	template <typename T = void> static T ShowBroadcastAppendPlayerName_1(uint32_t styleId, uint32_t playerID) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x35C60F8))(0, styleId, playerID);
	}
	template <typename T = void> static T ShowBroadcastAppendSubIcon(uint32_t styleId, Il2CppString* SubIcon) {
		return ((T (*)(void *, uint32_t, Il2CppString*))(Il2CppBase() + 0x35C62FC))(0, styleId, SubIcon);
	}
	template <typename T = void> static T ShowBroadcastForamt(uint32_t styleId, Il2CppArray<uintptr_t>* paras) {
		return ((T (*)(void *, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35C64D0))(0, styleId, paras);
	}

};

}
