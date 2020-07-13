#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioSpectrumData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioSpectrumData"));
	}

	template <typename T = uintptr_t> T& amplifier() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& audioLength() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& bps() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& bpsBias() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& sampleFreq() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& sampleFreqInv() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& dataLength() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& data0() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& data1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& data2() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& data3() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLerpData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndexFloorTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetData0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetData1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetData2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetData3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T GetLerpData(float time, uintptr_t data) {
		return ((T (*)(AudioSpectrumData*, float, uintptr_t))(Il2CppBase() + 0x324EADC))(this, time, data);
	}
	template <typename T = float> T GetIndexFloorTime(int32_t index) {
		return ((T (*)(AudioSpectrumData*, int32_t))(Il2CppBase() + 0x324EEA0))(this, index);
	}
	template <typename T = void> T GetData(int32_t index, uintptr_t result) {
		return ((T (*)(AudioSpectrumData*, int32_t, uintptr_t))(Il2CppBase() + 0x324EFD4))(this, index, result);
	}
	template <typename T = float> T GetData0(int32_t index) {
		return ((T (*)(AudioSpectrumData*, int32_t))(Il2CppBase() + 0x324F0D0))(this, index);
	}
	template <typename T = float> T GetData1(int32_t index) {
		return ((T (*)(AudioSpectrumData*, int32_t))(Il2CppBase() + 0x324F1A8))(this, index);
	}
	template <typename T = float> T GetData2(int32_t index) {
		return ((T (*)(AudioSpectrumData*, int32_t))(Il2CppBase() + 0x324F280))(this, index);
	}
	template <typename T = float> T GetData3(int32_t index) {
		return ((T (*)(AudioSpectrumData*, int32_t))(Il2CppBase() + 0x324F358))(this, index);
	}

};

}
