#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CoreMath
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CoreMath"));
	}

	template <typename T = float> static T& SERVER_SCALEVALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& SERVER_SCALEVALUE_RECIPROCAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& SERVER_SCALEVALUE_HUNDRED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& SERVER_SCALEVALUE_HUNDRED_RECIPROCAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& MAX_COORDINATE_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& MIN_COORDINATE_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = float> static T& SERVER_SCALEVALUE_TEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = float> static T& SERVER_SCALEVALUE_TEN_RECIPROCAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = float> static T& SERVER_SCALEVALUE_FIFTY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& SPECIFIED_FLOAT_TO_BYTE_BASE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertFloatS2C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertFloatC2S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertIntS2C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertHPFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertHPFloatC2S() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertHPFloatS2C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ConvertHPFloatS2C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertVector3S2C_HundredScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_S2CPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_C2SPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_S2CAbsolutePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_C2SAbsolutePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ConvertVector3S2C_HundredScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertVector3C2S_HundredScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ConvertVector3C2S_HundredScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertFloatS2C_HundredScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertFloatC2S_HundredScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertVector3S2C_TenScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ConvertVector3S2C_TenScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertVector3C2S_TenScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ConvertVector3C2S_TenScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_ConvertVector3C2S_TenScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertByteToRotationInHalfCircle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertRotationInHalfCircleToByte() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertRotationToByte() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertByteToRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ConvertRotationToByte() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ConvertByteToRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertInt16ToRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertRotationToInt16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertIntS2C_HundredScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WrapAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_WrapAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeltaAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertInt16ToVehicleRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConverVehicletRotationToInt16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MappingSpecifiedFloatToByte() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MappingSpecifiedByteToFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConverPercentageToFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CeilToFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}

	template <typename T = float> static T ConvertFloatS2C(int32_t ServerValue) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x41A2FB0))(0, ServerValue);
	}
	template <typename T = int32_t> static T ConvertFloatC2S(float ClientValue) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x41A30C8))(0, ClientValue);
	}
	template <typename T = int32_t> static T ConvertIntS2C(int32_t ServerValue) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x41A31EC))(0, ServerValue);
	}
	template <typename T = int32_t> static T ConvertHPFloat(float ClientValue) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x41A3304))(0, ClientValue);
	}
	template <typename T = int32_t> static T ConvertHPFloatC2S(float ClientValue) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x41A3418))(0, ClientValue);
	}
	template <typename T = float> static T ConvertHPFloatS2C(int32_t ServerValue) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x41A357C))(0, ServerValue);
	}
	template <typename T = float> static T ConvertHPFloatS2C_1(int64_t ServerValue) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x41A3694))(0, ServerValue);
	}
	template <typename T = void> static T ConvertVector3S2C_HundredScale(uintptr_t* ClientVec, int16_t ServerX, int16_t ServerY, int16_t ServerZ) {
		return ((T (*)(void *, uintptr_t*, int16_t, int16_t, int16_t))(Il2CppBase() + 0x41A37CC))(0, ClientVec, ServerX, ServerY, ServerZ);
	}
	template <typename T = void> static T S2CPosition(uintptr_t* clientPos, int32_t ServerX, int32_t ServerY, int32_t ServerZ) {
		return ((T (*)(void *, uintptr_t*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x41A3954))(0, clientPos, ServerX, ServerY, ServerZ);
	}
	template <typename T = void> static T C2SPosition(Il2CppVector3 clientPos, uintptr_t* ServerX, uintptr_t* ServerY, uintptr_t* ServerZ) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x41A3C30))(0, clientPos, ServerX, ServerY, ServerZ);
	}
	template <typename T = void> static T S2CAbsolutePosition(uintptr_t* clientPos, int32_t ServerX, int32_t ServerY, int32_t ServerZ) {
		return ((T (*)(void *, uintptr_t*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x41A3FB8))(0, clientPos, ServerX, ServerY, ServerZ);
	}
	template <typename T = void> static T C2SAbsolutePosition(Il2CppVector3 clientPos, uintptr_t* ServerX, uintptr_t* ServerY, uintptr_t* ServerZ) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x41A40E0))(0, clientPos, ServerX, ServerY, ServerZ);
	}
	template <typename T = void> static T ConvertVector3S2C_HundredScale_1(uintptr_t* ClientVec, int32_t ServerX, int32_t ServerY, int32_t ServerZ) {
		return ((T (*)(void *, uintptr_t*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x41A3AA8))(0, ClientVec, ServerX, ServerY, ServerZ);
	}
	template <typename T = void> static T ConvertVector3C2S_HundredScale(Il2CppVector3 clientVec, uintptr_t* ServerX, uintptr_t* ServerY, uintptr_t* ServerZ) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x41A420C))(0, clientVec, ServerX, ServerY, ServerZ);
	}
	template <typename T = void> static T ConvertVector3C2S_HundredScale_1(Il2CppVector3 clientVec, uintptr_t* ServerX, uintptr_t* ServerY, uintptr_t* ServerZ) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x41A3DAC))(0, clientVec, ServerX, ServerY, ServerZ);
	}
	template <typename T = float> static T ConvertFloatS2C_HundredScale(int32_t ServerValue) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x41A4430))(0, ServerValue);
	}
	template <typename T = int16_t> static T ConvertFloatC2S_HundredScale(float ClientValue) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x41A4548))(0, ClientValue);
	}
	template <typename T = void> static T ConvertVector3S2C_TenScale(uintptr_t* ClientVec, int16_t ServerX, int16_t ServerY, int16_t ServerZ) {
		return ((T (*)(void *, uintptr_t*, int16_t, int16_t, int16_t))(Il2CppBase() + 0x41A4668))(0, ClientVec, ServerX, ServerY, ServerZ);
	}
	template <typename T = float> static T ConvertVector3S2C_TenScale_1(int16_t ServerValue) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x41A47F0))(0, ServerValue);
	}
	template <typename T = void> static T ConvertVector3C2S_TenScale(Il2CppVector3 clientVec, uintptr_t* ServerX, uintptr_t* ServerY, uintptr_t* ServerZ) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x41A4908))(0, clientVec, ServerX, ServerY, ServerZ);
	}
	template <typename T = void> static T ConvertVector3C2S_TenScale_1(Il2CppVector3 clientVec, uintptr_t* ServerX, uintptr_t* ServerY, uintptr_t* ServerZ) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x41A4B2C))(0, clientVec, ServerX, ServerY, ServerZ);
	}
	template <typename T = int16_t> static T ConvertVector3C2S_TenScale_2(float clientValue) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x41A4D38))(0, clientValue);
	}
	template <typename T = float> static T ConvertByteToRotationInHalfCircle(unsigned char ServerValue) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x41A4EBC))(0, ServerValue);
	}
	template <typename T = unsigned char> static T ConvertRotationInHalfCircleToByte(float ClientValue) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x41A4FA0))(0, ClientValue);
	}
	template <typename T = unsigned char> static T ConvertRotationToByte(float ClientValue) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x41A509C))(0, ClientValue);
	}
	template <typename T = float> static T ConvertByteToRotation(unsigned char ServerValue) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x41A518C))(0, ServerValue);
	}
	template <typename T = unsigned char> static T ConvertRotationToByte_1(float ClientValue, uintptr_t additional, bool isX) {
		return ((T (*)(void *, float, uintptr_t, bool))(Il2CppBase() + 0x41A527C))(0, ClientValue, additional, isX);
	}
	template <typename T = float> static T ConvertByteToRotation_1(unsigned char ServerValue, unsigned char additional, bool isX) {
		return ((T (*)(void *, unsigned char, unsigned char, bool))(Il2CppBase() + 0x41A53BC))(0, ServerValue, additional, isX);
	}
	template <typename T = float> static T ConvertInt16ToRotation(int16_t ServerValue) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x41A54DC))(0, ServerValue);
	}
	template <typename T = int16_t> static T ConvertRotationToInt16(float ClientValue) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x41A55CC))(0, ClientValue);
	}
	template <typename T = int32_t> static T ConvertIntS2C_HundredScale(int32_t ServerValue) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x41A56BC))(0, ServerValue);
	}
	template <typename T = float> static T WrapAngle(float angle) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x41A57D4))(0, angle);
	}
	template <typename T = Il2CppVector3> static T WrapAngle_1(Il2CppVector3 angle) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x41A5900))(0, angle);
	}
	template <typename T = Il2CppVector3> static T DeltaAngle(Il2CppVector3 current, Il2CppVector3 target) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x41A5A3C))(0, current, target);
	}
	template <typename T = float> static T ConvertInt16ToVehicleRotation(int16_t ServerValue) {
		return ((T (*)(void *, int16_t))(Il2CppBase() + 0x41A5BCC))(0, ServerValue);
	}
	template <typename T = int16_t> static T ConverVehicletRotationToInt16(float ClientValue) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x41A5CE4))(0, ClientValue);
	}
	template <typename T = unsigned char> static T MappingSpecifiedFloatToByte(float inClientValue) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x41A5E04))(0, inClientValue);
	}
	template <typename T = float> static T MappingSpecifiedByteToFloat(unsigned char inServerValue) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x41A5FA4))(0, inServerValue);
	}
	template <typename T = float> static T ConverPercentageToFloat(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x41A6208))(0, value);
	}
	template <typename T = float> static T CeilToFloat(float originValue, int32_t digits) {
		return ((T (*)(void *, float, int32_t))(Il2CppBase() + 0x41A6328))(0, originValue, digits);
	}

};

}
