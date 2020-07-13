#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TiltInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TiltInfo"));
	}

	template <typename T = int32_t> T& lampToLuminaireGeometry() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& numOfTiltAngles() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_angles() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_multiplyingFactors() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNumberOfTiltAngles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMultiplyingFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = int32_t> T get_numOfTiltAngles() {
		return ((T (*)(TiltInfo*))(Il2CppBase() + 0x498153C))(this);
	}
	template <typename T = void> T set_numOfTiltAngles(int32_t value) {
		return ((T (*)(TiltInfo*, int32_t))(Il2CppBase() + 0x4981544))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_angles() {
		return ((T (*)(TiltInfo*))(Il2CppBase() + 0x498154C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_multiplyingFactors() {
		return ((T (*)(TiltInfo*))(Il2CppBase() + 0x4981554))(this);
	}
	template <typename T = void> T SetNumberOfTiltAngles(int32_t value) {
		return ((T (*)(TiltInfo*, int32_t))(Il2CppBase() + 0x498155C))(this, value);
	}
	template <typename T = void> T SetAngle(int32_t index, double value) {
		return ((T (*)(TiltInfo*, int32_t, double))(Il2CppBase() + 0x4981660))(this, index, value);
	}
	template <typename T = void> T SetMultiplyingFactor(int32_t index, double value) {
		return ((T (*)(TiltInfo*, int32_t, double))(Il2CppBase() + 0x49817B0))(this, index, value);
	}

};

}
