#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DebugOverlay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DebugOverlay"));
	}

	template <typename T = bool> static T& isEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& nextClearTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& OnScreenTextLines() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& listActorText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& listWorldText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppVector2> static T& screenSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppRect> static T& rect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& style() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& content() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& background() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppRect> static T& rect3D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& style3D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLines() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOnObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInWorld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = void> static T SetLines(Il2CppString* label, Il2CppString* text, int32_t activeSeconds, uintptr_t lines) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x416F864))(0, label, text, activeSeconds, lines);
	}
	template <typename T = void> static T Set(Il2CppString* label, int32_t value, int32_t activeSeconds) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x416F9F4))(0, label, value, activeSeconds);
	}
	template <typename T = void> static T Set_1(Il2CppString* label, Il2CppVector3 vec, int32_t activeSeconds) {
		return ((T (*)(void *, Il2CppString*, Il2CppVector3, int32_t))(Il2CppBase() + 0x416FAD8))(0, label, vec, activeSeconds);
	}
	template <typename T = void> static T Set_2(Il2CppString* label, Il2CppString* text, int32_t activeSeconds) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x416FBC4))(0, label, text, activeSeconds);
	}
	template <typename T = void> static T SetOnObject(int32_t actorID, Il2CppString* label, Il2CppString* text, int32_t activeSeconds) {
		return ((T (*)(void *, int32_t, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x416FCA8))(0, actorID, label, text, activeSeconds);
	}
	template <typename T = void> static T SetInWorld(Il2CppVector3 position, Il2CppString* text, int32_t activeSeconds) {
		return ((T (*)(void *, Il2CppVector3, Il2CppString*, int32_t))(Il2CppBase() + 0x416FD90))(0, position, text, activeSeconds);
	}

};

}
