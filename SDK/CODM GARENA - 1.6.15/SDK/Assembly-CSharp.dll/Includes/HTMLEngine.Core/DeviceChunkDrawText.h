#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine.Core {

class DeviceChunkDrawText
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine.Core", "DeviceChunkDrawText"));
	}

	template <typename T = uintptr_t> T& Deco() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& DecoStop() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Id() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& PrevIsWord() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Draw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MeasureSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Draw(float deltaTime, Il2CppString* linkText, uintptr_t userData) {
		return ((T (*)(DeviceChunkDrawText*, float, Il2CppString*, uintptr_t))(Il2CppBase() + 0x475E23C))(this, deltaTime, linkText, userData);
	}
	template <typename T = void> T MeasureSize() {
		return ((T (*)(DeviceChunkDrawText*))(Il2CppBase() + 0x475E638))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DeviceChunkDrawText*))(Il2CppBase() + 0x475E738))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(DeviceChunkDrawText*))(Il2CppBase() + 0x475E7FC))(this);
	}

};

}
