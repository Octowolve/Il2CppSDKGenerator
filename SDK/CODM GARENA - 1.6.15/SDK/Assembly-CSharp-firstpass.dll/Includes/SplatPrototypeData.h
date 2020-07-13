#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SplatPrototypeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "SplatPrototypeData"));
	}

	template <typename T = Il2CppString*> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_ChannelName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& TintColor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& VerticalBlend() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Hardness() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& OverlayerHardness() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& SlopeThreshold() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Damp() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& HeightBlend() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& BlendHardenss() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_Texture() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_NormalMap() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector2> T& m_TileSize() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector2> T& m_TileOffset() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_SpecularMetallic() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_Smoothness() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = int32_t> T get_ChannelIndex() {
		return ((T (*)(SplatPrototypeData*))(Il2CppBase() + 0x2BD3CFC))(this);
	}
	template <typename T = void> T set_ChannelIndex(int32_t value) {
		return ((T (*)(SplatPrototypeData*, int32_t))(Il2CppBase() + 0x2BD3D04))(this, value);
	}

};

}
