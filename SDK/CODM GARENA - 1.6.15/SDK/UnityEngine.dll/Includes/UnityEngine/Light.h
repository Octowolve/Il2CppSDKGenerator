#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Light
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Light"));
	}

	template <typename T = int32_t> T& m_BakedIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_type() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A4E68))(this);
	}
	template <typename T = void> T set_type(uintptr_t value) {
		return ((T (*)(Light*, uintptr_t))(Il2CppBase() + 0x47A4F00))(this, value);
	}
	template <typename T = uintptr_t> T get_color() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A4FA0))(this);
	}
	template <typename T = void> T set_color(uintptr_t value) {
		return ((T (*)(Light*, uintptr_t))(Il2CppBase() + 0x47A5078))(this, value);
	}
	template <typename T = void> T INTERNAL_get_color(uintptr_t* value) {
		return ((T (*)(Light*, uintptr_t*))(Il2CppBase() + 0x47A4FD8))(this, value);
	}
	template <typename T = void> T INTERNAL_set_color(uintptr_t value) {
		return ((T (*)(Light*, uintptr_t))(Il2CppBase() + 0x47A509C))(this, value);
	}
	template <typename T = float> T get_colorTemperature() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A513C))(this);
	}
	template <typename T = void> T set_colorTemperature(float value) {
		return ((T (*)(Light*, float))(Il2CppBase() + 0x47A51D4))(this, value);
	}
	template <typename T = float> T get_intensity() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A5274))(this);
	}
	template <typename T = void> T set_intensity(float value) {
		return ((T (*)(Light*, float))(Il2CppBase() + 0x47A530C))(this, value);
	}
	template <typename T = float> T get_bounceIntensity() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A53AC))(this);
	}
	template <typename T = void> T set_bounceIntensity(float value) {
		return ((T (*)(Light*, float))(Il2CppBase() + 0x47A5444))(this, value);
	}
	template <typename T = bool> T get_usePhysicalAttenuation() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A54E4))(this);
	}
	template <typename T = void> T set_usePhysicalAttenuation(bool value) {
		return ((T (*)(Light*, bool))(Il2CppBase() + 0x47A557C))(this, value);
	}
	template <typename T = uintptr_t> T get_shadows() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A561C))(this);
	}
	template <typename T = void> T set_shadows(uintptr_t value) {
		return ((T (*)(Light*, uintptr_t))(Il2CppBase() + 0x47A56B4))(this, value);
	}
	template <typename T = float> T get_shadowStrength() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A5754))(this);
	}
	template <typename T = void> T set_shadowStrength(float value) {
		return ((T (*)(Light*, float))(Il2CppBase() + 0x47A57EC))(this, value);
	}
	template <typename T = uintptr_t> T get_shadowResolution() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A588C))(this);
	}
	template <typename T = void> T set_shadowResolution(uintptr_t value) {
		return ((T (*)(Light*, uintptr_t))(Il2CppBase() + 0x47A5924))(this, value);
	}
	template <typename T = int32_t> T get_shadowCustomResolution() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A59C4))(this);
	}
	template <typename T = void> T set_shadowCustomResolution(int32_t value) {
		return ((T (*)(Light*, int32_t))(Il2CppBase() + 0x47A5A5C))(this, value);
	}
	template <typename T = float> T get_shadowBias() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A5AFC))(this);
	}
	template <typename T = void> T set_shadowBias(float value) {
		return ((T (*)(Light*, float))(Il2CppBase() + 0x47A5B94))(this, value);
	}
	template <typename T = float> T get_shadowNormalBias() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A5C34))(this);
	}
	template <typename T = void> T set_shadowNormalBias(float value) {
		return ((T (*)(Light*, float))(Il2CppBase() + 0x47A5CCC))(this, value);
	}
	template <typename T = float> T get_shadowNearPlane() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A5D6C))(this);
	}
	template <typename T = void> T set_shadowNearPlane(float value) {
		return ((T (*)(Light*, float))(Il2CppBase() + 0x47A5E04))(this, value);
	}
	template <typename T = float> T get_shadowSoftness() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A5EA4))(this);
	}
	template <typename T = void> T set_shadowSoftness(float value) {
		return ((T (*)(Light*, float))(Il2CppBase() + 0x47A5F3C))(this, value);
	}
	template <typename T = float> T get_shadowSoftnessFade() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A5FDC))(this);
	}
	template <typename T = void> T set_shadowSoftnessFade(float value) {
		return ((T (*)(Light*, float))(Il2CppBase() + 0x47A6074))(this, value);
	}
	template <typename T = float> T get_range() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A6114))(this);
	}
	template <typename T = void> T set_range(float value) {
		return ((T (*)(Light*, float))(Il2CppBase() + 0x47A61AC))(this, value);
	}
	template <typename T = float> T get_spotAngle() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A624C))(this);
	}
	template <typename T = void> T set_spotAngle(float value) {
		return ((T (*)(Light*, float))(Il2CppBase() + 0x47A62E4))(this, value);
	}
	template <typename T = float> T get_cookieSize() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A6384))(this);
	}
	template <typename T = void> T set_cookieSize(float value) {
		return ((T (*)(Light*, float))(Il2CppBase() + 0x47A641C))(this, value);
	}
	template <typename T = uintptr_t> T get_cookie() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A64BC))(this);
	}
	template <typename T = void> T set_cookie(uintptr_t value) {
		return ((T (*)(Light*, uintptr_t))(Il2CppBase() + 0x47A6554))(this, value);
	}
	template <typename T = uintptr_t> T get_flare() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A65F4))(this);
	}
	template <typename T = void> T set_flare(uintptr_t value) {
		return ((T (*)(Light*, uintptr_t))(Il2CppBase() + 0x47A668C))(this, value);
	}
	template <typename T = uintptr_t> T get_renderMode() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A672C))(this);
	}
	template <typename T = void> T set_renderMode(uintptr_t value) {
		return ((T (*)(Light*, uintptr_t))(Il2CppBase() + 0x47A67C4))(this, value);
	}
	template <typename T = bool> T get_alreadyLightmapped() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A6864))(this);
	}
	template <typename T = void> T set_alreadyLightmapped(bool value) {
		return ((T (*)(Light*, bool))(Il2CppBase() + 0x47A68FC))(this, value);
	}
	template <typename T = int32_t> T get_bakedIndex() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A699C))(this);
	}
	template <typename T = void> T set_bakedIndex(int32_t value) {
		return ((T (*)(Light*, int32_t))(Il2CppBase() + 0x47A69A4))(this, value);
	}
	template <typename T = bool> T get_isBaked() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A69AC))(this);
	}
	template <typename T = int32_t> T get_cullingMask() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A6A44))(this);
	}
	template <typename T = void> T set_cullingMask(int32_t value) {
		return ((T (*)(Light*, int32_t))(Il2CppBase() + 0x47A6ADC))(this, value);
	}
	template <typename T = void> T AddCommandBuffer(uintptr_t evt, uintptr_t buffer) {
		return ((T (*)(Light*, uintptr_t, uintptr_t))(Il2CppBase() + 0x47A6B7C))(this, evt, buffer);
	}
	template <typename T = void> T AddCommandBuffer_1(uintptr_t evt, uintptr_t buffer, uintptr_t shadowPassMask) {
		return ((T (*)(Light*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x47A6B98))(this, evt, buffer, shadowPassMask);
	}
	template <typename T = void> T RemoveCommandBuffer(uintptr_t evt, uintptr_t buffer) {
		return ((T (*)(Light*, uintptr_t, uintptr_t))(Il2CppBase() + 0x47A6C48))(this, evt, buffer);
	}
	template <typename T = void> T RemoveCommandBuffers(uintptr_t evt) {
		return ((T (*)(Light*, uintptr_t))(Il2CppBase() + 0x47A6CF0))(this, evt);
	}
	template <typename T = void> T RemoveAllCommandBuffers() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A6D90))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCommandBuffers(uintptr_t evt) {
		return ((T (*)(Light*, uintptr_t))(Il2CppBase() + 0x47A6E28))(this, evt);
	}
	template <typename T = int32_t> T get_commandBufferCount() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A6EC8))(this);
	}
	template <typename T = int32_t> static T get_pixelLightCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A6F60))(0);
	}
	template <typename T = void> static T set_pixelLightCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47A6FF0))(0, value);
	}
	template <typename T = void> T SetProbeOcclusionIndex(int32_t index) {
		return ((T (*)(Light*, int32_t))(Il2CppBase() + 0x47A7088))(this, index);
	}
	template <typename T = int32_t> T GetProbeOcclusionIndex() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A7128))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetLights(uintptr_t type, int32_t layer) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x47A71C0))(0, type, layer);
	}
	template <typename T = float> T get_shadowConstantBias() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A7260))(this);
	}
	template <typename T = void> T set_shadowConstantBias(float value) {
		return ((T (*)(Light*, float))(Il2CppBase() + 0x47A7268))(this, value);
	}
	template <typename T = float> T get_shadowObjectSizeBias() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A726C))(this);
	}
	template <typename T = void> T set_shadowObjectSizeBias(float value) {
		return ((T (*)(Light*, float))(Il2CppBase() + 0x47A7274))(this, value);
	}
	template <typename T = bool> T get_attenuate() {
		return ((T (*)(Light*))(Il2CppBase() + 0x47A7278))(this);
	}
	template <typename T = void> T set_attenuate(bool value) {
		return ((T (*)(Light*, bool))(Il2CppBase() + 0x47A7280))(this, value);
	}

};

}
