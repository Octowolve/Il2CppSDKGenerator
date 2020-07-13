#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BpExpInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BpExpInfo"));
	}

	template <typename T = int32_t> T& mStartTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& mEndTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& mFactor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mExpType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T get_StartTime() {
		return ((T (*)(BpExpInfo*))(Il2CppBase() + 0x35C066C))(this);
	}
	template <typename T = int32_t> T get_EndTime() {
		return ((T (*)(BpExpInfo*))(Il2CppBase() + 0x35C0674))(this);
	}
	template <typename T = int32_t> T get_Factor() {
		return ((T (*)(BpExpInfo*))(Il2CppBase() + 0x35C067C))(this);
	}
	template <typename T = uintptr_t> T get_ExpType() {
		return ((T (*)(BpExpInfo*))(Il2CppBase() + 0x35C0684))(this);
	}
	template <typename T = bool> T IsValid(int32_t serverTime) {
		return ((T (*)(BpExpInfo*, int32_t))(Il2CppBase() + 0x35C068C))(this, serverTime);
	}
	template <typename T = void> T SetData(int32_t startTime, int32_t endTime, float factor, uintptr_t expType) {
		return ((T (*)(BpExpInfo*, int32_t, int32_t, float, uintptr_t))(Il2CppBase() + 0x35C0760))(this, startTime, endTime, factor, expType);
	}

};

}
