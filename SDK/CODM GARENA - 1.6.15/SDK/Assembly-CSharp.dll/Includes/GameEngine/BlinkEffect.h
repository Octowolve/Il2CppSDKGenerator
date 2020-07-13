#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BlinkEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BlinkEffect"));
	}

	template <typename T = Il2CppString*> static T& TAG_ADD_COLOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& BlinkColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& DarkColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& OffColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& FresnelFactor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Renderer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_BlinkMaterial() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& Start() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_IsPlaying() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uintptr_t> T& m_OriginShader() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_BlinkShader() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> static T& BlinkShaderName3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppString*> static T& BlinkShaderName1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& BlinkShader3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& BlinkShader1P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = bool> T& m_Inited() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BlinkEffect*))(Il2CppBase() + 0x3614D30))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BlinkEffect*))(Il2CppBase() + 0x3615068))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BlinkEffect*))(Il2CppBase() + 0x3615130))(this);
	}
	template <typename T = void> T PlayEffect() {
		return ((T (*)(BlinkEffect*))(Il2CppBase() + 0x3615404))(this);
	}
	template <typename T = void> T StopEffect() {
		return ((T (*)(BlinkEffect*))(Il2CppBase() + 0x36155F8))(this);
	}
	template <typename T = void> T DestroyEffect() {
		return ((T (*)(BlinkEffect*))(Il2CppBase() + 0x36157F8))(this);
	}

};

}
