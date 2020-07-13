#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class RenderSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "RenderSettings"));
	}


	template <typename T = bool> static T get_fog() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E75924))(0);
	}
	template <typename T = void> static T set_fog(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4E759B4))(0, value);
	}
	template <typename T = uintptr_t> static T get_fogMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E75A4C))(0);
	}
	template <typename T = void> static T set_fogMode(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E75ADC))(0, value);
	}
	template <typename T = uintptr_t> static T get_fogColor() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E75B74))(0);
	}
	template <typename T = void> static T set_fogColor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E75C40))(0, value);
	}
	template <typename T = void> static T INTERNAL_get_fogColor(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x4E75BA8))(0, value);
	}
	template <typename T = void> static T INTERNAL_set_fogColor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E75C68))(0, value);
	}
	template <typename T = float> static T get_fogDensity() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E75D00))(0);
	}
	template <typename T = void> static T set_fogDensity(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4E75D90))(0, value);
	}
	template <typename T = float> static T get_fogHeightAtten() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E75E28))(0);
	}
	template <typename T = void> static T set_fogHeightAtten(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4E75EB8))(0, value);
	}
	template <typename T = void> static T set_fogHeightOffset(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4E75F50))(0, value);
	}
	template <typename T = float> static T get_fogStartDistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E75FE8))(0);
	}
	template <typename T = void> static T set_fogStartDistance(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4E76078))(0, value);
	}
	template <typename T = float> static T get_fogEndDistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E76110))(0);
	}
	template <typename T = void> static T set_fogEndDistance(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4E761A0))(0, value);
	}
	template <typename T = uintptr_t> static T get_ambientMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E76238))(0);
	}
	template <typename T = void> static T set_ambientMode(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E762C8))(0, value);
	}
	template <typename T = uintptr_t> static T get_ambientSkyColor() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E76360))(0);
	}
	template <typename T = void> static T set_ambientSkyColor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7642C))(0, value);
	}
	template <typename T = void> static T INTERNAL_get_ambientSkyColor(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x4E76394))(0, value);
	}
	template <typename T = void> static T INTERNAL_set_ambientSkyColor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E76454))(0, value);
	}
	template <typename T = uintptr_t> static T get_ambientEquatorColor() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E764EC))(0);
	}
	template <typename T = void> static T set_ambientEquatorColor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E765B8))(0, value);
	}
	template <typename T = void> static T INTERNAL_get_ambientEquatorColor(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x4E76520))(0, value);
	}
	template <typename T = void> static T INTERNAL_set_ambientEquatorColor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E765E0))(0, value);
	}
	template <typename T = uintptr_t> static T get_ambientGroundColor() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E76678))(0);
	}
	template <typename T = void> static T set_ambientGroundColor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E76744))(0, value);
	}
	template <typename T = void> static T INTERNAL_get_ambientGroundColor(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x4E766AC))(0, value);
	}
	template <typename T = void> static T INTERNAL_set_ambientGroundColor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E7676C))(0, value);
	}
	template <typename T = uintptr_t> static T get_ambientLight() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E76804))(0);
	}
	template <typename T = void> static T set_ambientLight(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E768D0))(0, value);
	}
	template <typename T = void> static T INTERNAL_get_ambientLight(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x4E76838))(0, value);
	}
	template <typename T = void> static T INTERNAL_set_ambientLight(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E768F8))(0, value);
	}
	template <typename T = float> static T get_ambientIntensity() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E76990))(0);
	}
	template <typename T = void> static T set_ambientIntensity(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4E76A20))(0, value);
	}
	template <typename T = uintptr_t> static T get_ambientProbe() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E76AB8))(0);
	}
	template <typename T = void> static T set_ambientProbe(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E76B94))(0, value);
	}
	template <typename T = void> static T INTERNAL_get_ambientProbe(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x4E76AFC))(0, value);
	}
	template <typename T = void> static T INTERNAL_set_ambientProbe(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E76BBC))(0, value);
	}
	template <typename T = void> static T set_haloStrength(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4E76C54))(0, value);
	}
	template <typename T = void> static T set_flareStrength(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4E76CEC))(0, value);
	}
	template <typename T = uintptr_t> static T get_skybox() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E76D84))(0);
	}
	template <typename T = void> static T set_skybox(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E76E14))(0, value);
	}
	template <typename T = float> static T get_photometryUnitScale() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E76EAC))(0);
	}

};

}
