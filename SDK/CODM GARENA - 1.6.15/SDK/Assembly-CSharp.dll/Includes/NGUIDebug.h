#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NGUIDebug
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NGUIDebug"));
	}

	template <typename T = bool> static T& mRayDebug() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T& mLines() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& mInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Log() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Log() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> static T get_debugRaycast() {
		return ((T (*)(void *))(Il2CppBase() + 0x43B7B38))(0);
	}
	template <typename T = void> static T set_debugRaycast(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x43B7BE8))(0, value);
	}
	template <typename T = void> static T CreateInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x43B7CF0))(0);
	}
	template <typename T = void> static T LogString(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43B7F40))(0, text);
	}
	template <typename T = void> static T Log(Il2CppArray<uintptr_t>* objs) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43B81E8))(0, objs);
	}
	template <typename T = void> static T Log_1(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43B845C))(0, s);
	}
	template <typename T = void> static T Clear() {
		return ((T (*)(void *))(Il2CppBase() + 0x43B866C))(0);
	}
	template <typename T = void> static T DrawBounds(uintptr_t b) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43B87A0))(0, b);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(NGUIDebug*))(Il2CppBase() + 0x43B8C30))(this);
	}

};

}
