#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Rendering {

class RenderTargetBlendState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Rendering", "RenderTargetBlendState"));
	}

	template <typename T = unsigned char> T& m_WriteMask() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = unsigned char> T& m_SourceColorBlendMode() {
		return *(T*)((uintptr_t)this + 0x1);
	}
	template <typename T = unsigned char> T& m_DestinationColorBlendMode() {
		return *(T*)((uintptr_t)this + 0x2);
	}
	template <typename T = unsigned char> T& m_SourceAlphaBlendMode() {
		return *(T*)((uintptr_t)this + 0x3);
	}
	template <typename T = unsigned char> T& m_DestinationAlphaBlendMode() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = unsigned char> T& m_ColorBlendOperation() {
		return *(T*)((uintptr_t)this + 0x5);
	}
	template <typename T = unsigned char> T& m_AlphaBlendOperation() {
		return *(T*)((uintptr_t)this + 0x6);
	}
	template <typename T = unsigned char> T& m_Padding() {
		return *(T*)((uintptr_t)this + 0x7);
	}

	template <typename T = uintptr_t> static T get_Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DB2564))(0);
	}
	template <typename T = void> T set_sourceColorBlendMode(uintptr_t value) {
		return ((T (*)(RenderTargetBlendState*, uintptr_t))(Il2CppBase() + 0x4DB3070))(this, value);
	}
	template <typename T = void> T set_destinationColorBlendMode(uintptr_t value) {
		return ((T (*)(RenderTargetBlendState*, uintptr_t))(Il2CppBase() + 0x4DB3080))(this, value);
	}
	template <typename T = void> T set_sourceAlphaBlendMode(uintptr_t value) {
		return ((T (*)(RenderTargetBlendState*, uintptr_t))(Il2CppBase() + 0x4DB3090))(this, value);
	}
	template <typename T = void> T set_destinationAlphaBlendMode(uintptr_t value) {
		return ((T (*)(RenderTargetBlendState*, uintptr_t))(Il2CppBase() + 0x4DB30A0))(this, value);
	}

};

}
