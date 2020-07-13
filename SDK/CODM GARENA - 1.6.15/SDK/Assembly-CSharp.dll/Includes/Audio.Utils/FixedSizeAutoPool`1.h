#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Utils {

class FixedSizeAutoPool1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Utils", "FixedSizeAutoPool`1"));
	}

	template <typename T = int32_t> static T& kDefaultPoolSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_iNextIndex() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_arrObjects() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_iTotalCount() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& mStealMode() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_iPopOrder() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T CreatePool(int32_t iCount, uintptr_t pStealMode) {
		return ((T (*)(FixedSizeAutoPool1*, int32_t, uintptr_t))(Il2CppBase() + 0x471F26C))(this, iCount, pStealMode);
	}
	template <typename T = uintptr_t> T GetAnObject() {
		return ((T (*)(FixedSizeAutoPool1*))(Il2CppBase() + 0x471F4C8))(this);
	}
	template <typename T = void> T RecycleObject(uintptr_t pObj) {
		return ((T (*)(FixedSizeAutoPool1*, uintptr_t))(Il2CppBase() + 0x471FD90))(this, pObj);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(FixedSizeAutoPool1*))(Il2CppBase() + 0x471FE2C))(this);
	}

};

}
