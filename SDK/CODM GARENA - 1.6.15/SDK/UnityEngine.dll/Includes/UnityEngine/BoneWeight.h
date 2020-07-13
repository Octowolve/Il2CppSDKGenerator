#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class BoneWeight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "BoneWeight"));
	}

	template <typename T = float> T& m_Weight0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_Weight1() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& m_Weight2() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_Weight3() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_BoneIndex0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_BoneIndex1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_BoneIndex2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_BoneIndex3() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = float> T get_weight0() {
		return ((T (*)(BoneWeight*))(Il2CppBase() + 0x469EAE4))(this);
	}
	template <typename T = void> T set_weight0(float value) {
		return ((T (*)(BoneWeight*, float))(Il2CppBase() + 0x469EAF4))(this, value);
	}
	template <typename T = float> T get_weight1() {
		return ((T (*)(BoneWeight*))(Il2CppBase() + 0x469EB04))(this);
	}
	template <typename T = float> T get_weight2() {
		return ((T (*)(BoneWeight*))(Il2CppBase() + 0x469EB14))(this);
	}
	template <typename T = float> T get_weight3() {
		return ((T (*)(BoneWeight*))(Il2CppBase() + 0x469EB24))(this);
	}
	template <typename T = int32_t> T get_boneIndex0() {
		return ((T (*)(BoneWeight*))(Il2CppBase() + 0x469EB34))(this);
	}
	template <typename T = void> T set_boneIndex0(int32_t value) {
		return ((T (*)(BoneWeight*, int32_t))(Il2CppBase() + 0x469EB44))(this, value);
	}
	template <typename T = int32_t> T get_boneIndex1() {
		return ((T (*)(BoneWeight*))(Il2CppBase() + 0x469EB54))(this);
	}
	template <typename T = void> T set_boneIndex1(int32_t value) {
		return ((T (*)(BoneWeight*, int32_t))(Il2CppBase() + 0x469EB64))(this, value);
	}
	template <typename T = int32_t> T get_boneIndex2() {
		return ((T (*)(BoneWeight*))(Il2CppBase() + 0x469EB74))(this);
	}
	template <typename T = void> T set_boneIndex2(int32_t value) {
		return ((T (*)(BoneWeight*, int32_t))(Il2CppBase() + 0x469EB84))(this, value);
	}
	template <typename T = int32_t> T get_boneIndex3() {
		return ((T (*)(BoneWeight*))(Il2CppBase() + 0x469EB94))(this);
	}
	template <typename T = void> T set_boneIndex3(int32_t value) {
		return ((T (*)(BoneWeight*, int32_t))(Il2CppBase() + 0x469EBA4))(this, value);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(BoneWeight*))(Il2CppBase() + 0x469EC98))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(BoneWeight*, uintptr_t))(Il2CppBase() + 0x469EE98))(this, other);
	}

};

}
