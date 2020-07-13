#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Rendering {

class StencilState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Rendering", "StencilState"));
	}

	template <typename T = unsigned char> T& m_Enabled() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = unsigned char> T& m_ReadMask() {
		return *(T*)((uintptr_t)this + 0x1);
	}
	template <typename T = unsigned char> T& m_WriteMask() {
		return *(T*)((uintptr_t)this + 0x2);
	}
	template <typename T = unsigned char> T& m_Padding() {
		return *(T*)((uintptr_t)this + 0x3);
	}
	template <typename T = unsigned char> T& m_CompareFunctionFront() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = unsigned char> T& m_PassOperationFront() {
		return *(T*)((uintptr_t)this + 0x5);
	}
	template <typename T = unsigned char> T& m_FailOperationFront() {
		return *(T*)((uintptr_t)this + 0x6);
	}
	template <typename T = unsigned char> T& m_ZFailOperationFront() {
		return *(T*)((uintptr_t)this + 0x7);
	}
	template <typename T = unsigned char> T& m_CompareFunctionBack() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& m_PassOperationBack() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = unsigned char> T& m_FailOperationBack() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = unsigned char> T& m_ZFailOperationBack() {
		return *(T*)((uintptr_t)this + 0xB);
	}

	template <typename T = uintptr_t> static T get_Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DB3264))(0);
	}
	template <typename T = void> T set_enabled(bool value) {
		return ((T (*)(StencilState*, bool))(Il2CppBase() + 0x4DB3384))(this, value);
	}
	template <typename T = void> T set_readMask(unsigned char value) {
		return ((T (*)(StencilState*, unsigned char))(Il2CppBase() + 0x4DB3394))(this, value);
	}
	template <typename T = void> T set_writeMask(unsigned char value) {
		return ((T (*)(StencilState*, unsigned char))(Il2CppBase() + 0x4DB33A4))(this, value);
	}
	template <typename T = void> T set_compareFunction(uintptr_t value) {
		return ((T (*)(StencilState*, uintptr_t))(Il2CppBase() + 0x4DB33B8))(this, value);
	}
	template <typename T = void> T set_passOperation(uintptr_t value) {
		return ((T (*)(StencilState*, uintptr_t))(Il2CppBase() + 0x4DB33D0))(this, value);
	}
	template <typename T = void> T set_zFailOperation(uintptr_t value) {
		return ((T (*)(StencilState*, uintptr_t))(Il2CppBase() + 0x4DB33E8))(this, value);
	}
	template <typename T = void> T set_compareFunctionFront(uintptr_t value) {
		return ((T (*)(StencilState*, uintptr_t))(Il2CppBase() + 0x4DB33F4))(this, value);
	}
	template <typename T = void> T set_passOperationFront(uintptr_t value) {
		return ((T (*)(StencilState*, uintptr_t))(Il2CppBase() + 0x4DB33FC))(this, value);
	}
	template <typename T = void> T set_zFailOperationFront(uintptr_t value) {
		return ((T (*)(StencilState*, uintptr_t))(Il2CppBase() + 0x4DB3404))(this, value);
	}
	template <typename T = void> T set_compareFunctionBack(uintptr_t value) {
		return ((T (*)(StencilState*, uintptr_t))(Il2CppBase() + 0x4DB340C))(this, value);
	}
	template <typename T = void> T set_passOperationBack(uintptr_t value) {
		return ((T (*)(StencilState*, uintptr_t))(Il2CppBase() + 0x4DB3414))(this, value);
	}
	template <typename T = void> T set_zFailOperationBack(uintptr_t value) {
		return ((T (*)(StencilState*, uintptr_t))(Il2CppBase() + 0x4DB341C))(this, value);
	}

};

}
