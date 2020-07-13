#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class EffectConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "EffectConfig"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& EffectID_1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& EffectSocket_1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& EffectID_2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& EffectSocket_2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& EffectID_3() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& EffectSocket_3() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& EffectID_4() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& EffectSocket_4() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& EffectID_5() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& EffectSocket_5() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& CameraEffectAsset() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& FogDensity() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& FogHeightAtten() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& FogStart() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& FogColor_Red() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& FogColor_Green() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& FogColor_Blue() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& FogMaxHeight() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& FogColorSkyBox_Red() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& FogColorSkyBox_Green() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& FogColorSkyBox_Blue() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& BuffIcon() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T GetPrimaryKeyValue() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x46429C0))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642A60))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(EffectConfig*, Il2CppString*))(Il2CppBase() + 0x4642A68))(this, value);
	}
	template <typename T = int32_t> T get_EffectID_1() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642A70))(this);
	}
	template <typename T = void> T set_EffectID_1(int32_t value) {
		return ((T (*)(EffectConfig*, int32_t))(Il2CppBase() + 0x4642A78))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectSocket_1() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642A80))(this);
	}
	template <typename T = void> T set_EffectSocket_1(Il2CppString* value) {
		return ((T (*)(EffectConfig*, Il2CppString*))(Il2CppBase() + 0x4642A88))(this, value);
	}
	template <typename T = int32_t> T get_EffectID_2() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642A90))(this);
	}
	template <typename T = void> T set_EffectID_2(int32_t value) {
		return ((T (*)(EffectConfig*, int32_t))(Il2CppBase() + 0x4642A98))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectSocket_2() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642AA0))(this);
	}
	template <typename T = void> T set_EffectSocket_2(Il2CppString* value) {
		return ((T (*)(EffectConfig*, Il2CppString*))(Il2CppBase() + 0x4642AA8))(this, value);
	}
	template <typename T = int32_t> T get_EffectID_3() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642AB0))(this);
	}
	template <typename T = void> T set_EffectID_3(int32_t value) {
		return ((T (*)(EffectConfig*, int32_t))(Il2CppBase() + 0x4642AB8))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectSocket_3() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642AC0))(this);
	}
	template <typename T = void> T set_EffectSocket_3(Il2CppString* value) {
		return ((T (*)(EffectConfig*, Il2CppString*))(Il2CppBase() + 0x4642AC8))(this, value);
	}
	template <typename T = int32_t> T get_EffectID_4() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642AD0))(this);
	}
	template <typename T = void> T set_EffectID_4(int32_t value) {
		return ((T (*)(EffectConfig*, int32_t))(Il2CppBase() + 0x4642AD8))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectSocket_4() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642AE0))(this);
	}
	template <typename T = void> T set_EffectSocket_4(Il2CppString* value) {
		return ((T (*)(EffectConfig*, Il2CppString*))(Il2CppBase() + 0x4642AE8))(this, value);
	}
	template <typename T = int32_t> T get_EffectID_5() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642AF0))(this);
	}
	template <typename T = void> T set_EffectID_5(int32_t value) {
		return ((T (*)(EffectConfig*, int32_t))(Il2CppBase() + 0x4642AF8))(this, value);
	}
	template <typename T = Il2CppString*> T get_EffectSocket_5() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642B00))(this);
	}
	template <typename T = void> T set_EffectSocket_5(Il2CppString* value) {
		return ((T (*)(EffectConfig*, Il2CppString*))(Il2CppBase() + 0x4642B08))(this, value);
	}
	template <typename T = int32_t> T get_CameraEffectAsset() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642B10))(this);
	}
	template <typename T = void> T set_CameraEffectAsset(int32_t value) {
		return ((T (*)(EffectConfig*, int32_t))(Il2CppBase() + 0x4642B18))(this, value);
	}
	template <typename T = float> T get_FogDensity() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642B20))(this);
	}
	template <typename T = void> T set_FogDensity(float value) {
		return ((T (*)(EffectConfig*, float))(Il2CppBase() + 0x4642B28))(this, value);
	}
	template <typename T = float> T get_FogHeightAtten() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642B30))(this);
	}
	template <typename T = void> T set_FogHeightAtten(float value) {
		return ((T (*)(EffectConfig*, float))(Il2CppBase() + 0x4642B38))(this, value);
	}
	template <typename T = float> T get_FogStart() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642B40))(this);
	}
	template <typename T = void> T set_FogStart(float value) {
		return ((T (*)(EffectConfig*, float))(Il2CppBase() + 0x4642B48))(this, value);
	}
	template <typename T = float> T get_FogColor_Red() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642B50))(this);
	}
	template <typename T = void> T set_FogColor_Red(float value) {
		return ((T (*)(EffectConfig*, float))(Il2CppBase() + 0x4642B58))(this, value);
	}
	template <typename T = float> T get_FogColor_Green() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642B60))(this);
	}
	template <typename T = void> T set_FogColor_Green(float value) {
		return ((T (*)(EffectConfig*, float))(Il2CppBase() + 0x4642B68))(this, value);
	}
	template <typename T = float> T get_FogColor_Blue() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642B70))(this);
	}
	template <typename T = void> T set_FogColor_Blue(float value) {
		return ((T (*)(EffectConfig*, float))(Il2CppBase() + 0x4642B78))(this, value);
	}
	template <typename T = float> T get_FogMaxHeight() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642B80))(this);
	}
	template <typename T = void> T set_FogMaxHeight(float value) {
		return ((T (*)(EffectConfig*, float))(Il2CppBase() + 0x4642B88))(this, value);
	}
	template <typename T = float> T get_FogColorSkyBox_Red() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642B90))(this);
	}
	template <typename T = void> T set_FogColorSkyBox_Red(float value) {
		return ((T (*)(EffectConfig*, float))(Il2CppBase() + 0x4642B98))(this, value);
	}
	template <typename T = float> T get_FogColorSkyBox_Green() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642BA0))(this);
	}
	template <typename T = void> T set_FogColorSkyBox_Green(float value) {
		return ((T (*)(EffectConfig*, float))(Il2CppBase() + 0x4642BA8))(this, value);
	}
	template <typename T = float> T get_FogColorSkyBox_Blue() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642BB0))(this);
	}
	template <typename T = void> T set_FogColorSkyBox_Blue(float value) {
		return ((T (*)(EffectConfig*, float))(Il2CppBase() + 0x4642BB8))(this, value);
	}
	template <typename T = Il2CppString*> T get_BuffIcon() {
		return ((T (*)(EffectConfig*))(Il2CppBase() + 0x4642BC0))(this);
	}
	template <typename T = void> T set_BuffIcon(Il2CppString* value) {
		return ((T (*)(EffectConfig*, Il2CppString*))(Il2CppBase() + 0x4642BC8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(EffectConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4642BD0))(this, bytes, position);
	}

};

}
