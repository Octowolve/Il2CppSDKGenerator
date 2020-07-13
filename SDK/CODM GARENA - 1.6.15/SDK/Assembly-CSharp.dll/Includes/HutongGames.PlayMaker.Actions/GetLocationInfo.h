#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetLocationInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetLocationInfo"));
	}

	template <typename T = uintptr_t> T& vectorPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& longitude() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& latitude() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& altitude() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& horizontalAccuracy() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& verticalAccuracy() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& errorEvent() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetLocationInfo*))(Il2CppBase() + 0x508DFB4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetLocationInfo*))(Il2CppBase() + 0x508DFD0))(this);
	}
	template <typename T = void> T DoGetLocationInfo() {
		return ((T (*)(GetLocationInfo*))(Il2CppBase() + 0x508DFD8))(this);
	}

};

}
