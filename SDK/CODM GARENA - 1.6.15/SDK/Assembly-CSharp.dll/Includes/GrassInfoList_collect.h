#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GrassInfoListcollect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GrassInfoList_collect"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_count() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_maxCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_allocSpace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T allocSpace(int32_t size) {
		return ((T (*)(GrassInfoListcollect*, int32_t))(Il2CppBase() + 0x3E29DA8))(this, size);
	}
	template <typename T = void> T add(int32_t e) {
		return ((T (*)(GrassInfoListcollect*, int32_t))(Il2CppBase() + 0x3E2BE00))(this, e);
	}
	template <typename T = void> T clear() {
		return ((T (*)(GrassInfoListcollect*))(Il2CppBase() + 0x3E2B90C))(this);
	}

};

}
