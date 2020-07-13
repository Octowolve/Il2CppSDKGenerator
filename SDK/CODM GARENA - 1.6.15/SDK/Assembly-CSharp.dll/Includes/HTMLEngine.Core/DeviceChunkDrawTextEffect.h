#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine.Core {

class DeviceChunkDrawTextEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine.Core", "DeviceChunkDrawTextEffect"));
	}

	template <typename T = uintptr_t> T& Effect() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& EffectColor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& EffectAmount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Draw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Draw(float deltaTime, Il2CppString* linkText, uintptr_t userData) {
		return ((T (*)(DeviceChunkDrawTextEffect*, float, Il2CppString*, uintptr_t))(Il2CppBase() + 0x475E8A4))(this, deltaTime, linkText, userData);
	}
	template <typename T = void> T xLuaBaseProxy_Draw(float P0, Il2CppString* P1, uintptr_t P2) {
		return ((T (*)(DeviceChunkDrawTextEffect*, float, Il2CppString*, uintptr_t))(Il2CppBase() + 0x475EF84))(this, P0, P1, P2);
	}

};

}
