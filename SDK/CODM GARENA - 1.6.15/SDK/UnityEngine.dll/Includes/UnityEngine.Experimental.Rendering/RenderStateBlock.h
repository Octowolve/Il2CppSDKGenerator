#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Rendering {

class RenderStateBlock
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Rendering", "RenderStateBlock"));
	}

	template <typename T = uintptr_t> T& m_BlendState() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& m_RasterState() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_DepthState() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_StencilState() {
		return *(T*)((uintptr_t)this + 0x52);
	}
	template <typename T = int32_t> T& m_StencilReference() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_Mask() {
		return *(T*)((uintptr_t)this + 0x64);
	}

	template <typename T = void> T set_blendState(uintptr_t value) {
		return ((T (*)(RenderStateBlock*, uintptr_t))(Il2CppBase() + 0x4DB2F98))(this, value);
	}
	template <typename T = void> T set_rasterState(uintptr_t value) {
		return ((T (*)(RenderStateBlock*, uintptr_t))(Il2CppBase() + 0x4DB2FD4))(this, value);
	}
	template <typename T = void> T set_depthState(uintptr_t value) {
		return ((T (*)(RenderStateBlock*, uintptr_t))(Il2CppBase() + 0x4DB2FE8))(this, value);
	}
	template <typename T = void> T set_stencilState(uintptr_t value) {
		return ((T (*)(RenderStateBlock*, uintptr_t))(Il2CppBase() + 0x4DB3000))(this, value);
	}
	template <typename T = void> T set_stencilReference(int32_t value) {
		return ((T (*)(RenderStateBlock*, int32_t))(Il2CppBase() + 0x4DB3018))(this, value);
	}
	template <typename T = void> T set_mask(uintptr_t value) {
		return ((T (*)(RenderStateBlock*, uintptr_t))(Il2CppBase() + 0x4DB3028))(this, value);
	}

};

}
