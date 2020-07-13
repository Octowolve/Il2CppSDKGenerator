#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GamePadCallbackWrappers
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GamePadCallbackWrappers"));
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& PriorityCbMap() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<int32_t>*> T& PriorityList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Invoke() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T init() {
		return ((T (*)(GamePadCallbackWrappers*))(Il2CppBase() + 0x244F76C))(this);
	}
	template <typename T = void> T AddCallback(int32_t priority, uintptr_t cb) {
		return ((T (*)(GamePadCallbackWrappers*, int32_t, uintptr_t))(Il2CppBase() + 0x244F87C))(this, priority, cb);
	}
	template <typename T = void> T RemoveCallback(int32_t priority, uintptr_t cb) {
		return ((T (*)(GamePadCallbackWrappers*, int32_t, uintptr_t))(Il2CppBase() + 0x244FD0C))(this, priority, cb);
	}
	template <typename T = void> T ClearAll() {
		return ((T (*)(GamePadCallbackWrappers*))(Il2CppBase() + 0x244F3B4))(this);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(GamePadCallbackWrappers*))(Il2CppBase() + 0x245300C))(this);
	}

};

}
