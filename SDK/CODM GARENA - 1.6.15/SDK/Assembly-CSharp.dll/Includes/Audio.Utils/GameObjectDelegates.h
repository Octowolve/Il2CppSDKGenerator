#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Utils {

class GameObjectDelegates
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Utils", "GameObjectDelegates"));
	}

	template <typename T = void*> T& mCallbackOnEnable() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& mCallbackOnDisable() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& mCallbackOnDestroy() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& mCallbackOnSetRoom() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(GameObjectDelegates*))(Il2CppBase() + 0x450ACF0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(GameObjectDelegates*))(Il2CppBase() + 0x450ADCC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GameObjectDelegates*))(Il2CppBase() + 0x450AEA8))(this);
	}

};

}
