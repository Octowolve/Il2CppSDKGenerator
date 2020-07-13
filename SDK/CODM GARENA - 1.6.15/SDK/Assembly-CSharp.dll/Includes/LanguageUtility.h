#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LanguageUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LanguageUtility"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_Translate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Translate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Translate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Translate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_Translate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryTranslate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> static T Translate(Il2CppString* locID) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x492726C))(0, locID);
	}
	template <typename T = Il2CppString*> static T Translate_1(Il2CppString* locID, uintptr_t arg0) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x492D6FC))(0, locID, arg0);
	}
	template <typename T = Il2CppString*> static T Translate_2(Il2CppString* locID, uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x492D7B8))(0, locID, arg0, arg1);
	}
	template <typename T = Il2CppString*> static T Translate_3(Il2CppString* locID, uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x492D898))(0, locID, arg0, arg1, arg2);
	}
	template <typename T = Il2CppString*> static T Translate_4(Il2CppString* locID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x492D984))(0, locID, args);
	}
	template <typename T = bool> static T TryTranslate(Il2CppString* locID, uintptr_t* content) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x492DA40))(0, locID, content);
	}
	template <typename T = void> static T ResetAll(bool addtive) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x492B6E0))(0, addtive);
	}

};

}
