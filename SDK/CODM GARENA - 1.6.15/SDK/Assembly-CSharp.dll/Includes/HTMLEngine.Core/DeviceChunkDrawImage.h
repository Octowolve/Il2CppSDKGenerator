#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine.Core {

class DeviceChunkDrawImage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine.Core", "DeviceChunkDrawImage"));
	}

	template <typename T = uintptr_t> T& Image() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Id() {
		return *(T*)((uintptr_t)this + 0x2C);
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

	template <typename T = void> T Draw(float deltaTime, Il2CppString* linkText, uintptr_t userData) {
		return ((T (*)(DeviceChunkDrawImage*, float, Il2CppString*, uintptr_t))(Il2CppBase() + 0x475DFA8))(this, deltaTime, linkText, userData);
	}
	template <typename T = void> T MeasureSize() {
		return ((T (*)(DeviceChunkDrawImage*))(Il2CppBase() + 0x475E0B4))(this);
	}

};

}
