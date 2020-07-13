#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RainDropEffect {

class RainDrawer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RainDropEffect", "RainDrawer"));
	}

	template <typename T = int32_t> T& RenderQueue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& CameraPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& OverlayColor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& NormalMap() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& ReliefTexture() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& DistortionStrength() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& ReliefValue() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& Shiness() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& Blur() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& Darkness() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& ShaderType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& material() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& meshFilter() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mesh() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& meshRenderer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& changed() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Hide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_IsEnabled() {
		return ((T (*)(RainDrawer*))(Il2CppBase() + 0x37E5F08))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(RainDrawer*))(Il2CppBase() + 0x37E5FEC))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(RainDrawer*))(Il2CppBase() + 0x37E6090))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(RainDrawer*))(Il2CppBase() + 0x37E61A8))(this);
	}

};

}
