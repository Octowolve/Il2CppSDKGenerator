#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Utils {

class ObjectPool1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Utils", "ObjectPool`1"));
	}

	template <typename T = int32_t> static T& K_DEFAULT_POOL_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& K_POOL_SIZE_INCREMENT_STEP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mListObjects() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& mITotalCount() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T CreatePool(int32_t iCount) {
		return ((T (*)(ObjectPool1*, int32_t))(Il2CppBase() + 0x47200F4))(this, iCount);
	}
	template <typename T = uintptr_t> T GetAnObject() {
		return ((T (*)(ObjectPool1*))(Il2CppBase() + 0x4720270))(this);
	}
	template <typename T = void> T RecycleObject(uintptr_t pObj) {
		return ((T (*)(ObjectPool1*, uintptr_t))(Il2CppBase() + 0x4720508))(this, pObj);
	}

};

}
