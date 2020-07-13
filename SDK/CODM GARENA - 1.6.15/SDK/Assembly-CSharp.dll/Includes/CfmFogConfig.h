#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CfmFogConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CfmFogConfig"));
	}

	template <typename T = bool> T& m_DebugShowFogColor() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& FogInscatteringColor() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& UseFogTexture() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& FogTexture() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& NearFogBlendColor() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& NearFogColorBlendFactor() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SkyLight() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& EnableDirectionalInscattering() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppVector3> T& InscatteringLightDirection() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& DirectionalInscatteringColor() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& DirectionalInscatteringFallOff() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& DirectionalInscatteringStartDistance() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& CosTerminatorAngle() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& FogCutoffDistance() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& InscatteringTexMipDistanceScale() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& InscatteringTexMipDistanceBias() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& SkyBoxMat() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_DirectionalInscatteringColorParameters() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& m_DirectionalInscatteringStartDistanceParameter() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& m_InscatteringLightDirectionParameters() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& m_FogInscatteringTextureParameters() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& m_FogInscatteringTextureColorResolveParameters() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& m_NearFogBlendColor() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& m_FogTextureBaker() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyParameters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyDefaultParameters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateParameters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateParameterVariables() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModeKeyword() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_DebugShowFogColor() {
		return ((T (*)(CfmFogConfig*))(Il2CppBase() + 0x1D1D1AC))(this);
	}
	template <typename T = void> T set_DebugShowFogColor(bool value) {
		return ((T (*)(CfmFogConfig*, bool))(Il2CppBase() + 0x1D1D1B4))(this, value);
	}
	template <typename T = uintptr_t> T get_FogTextureBaker() {
		return ((T (*)(CfmFogConfig*))(Il2CppBase() + 0x1D1D1BC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CfmFogConfig*))(Il2CppBase() + 0x1D1D328))(this);
	}
	template <typename T = void> T ApplyParameters() {
		return ((T (*)(CfmFogConfig*))(Il2CppBase() + 0x1D1D3C0))(this);
	}
	template <typename T = void> T ApplyDefaultParameters() {
		return ((T (*)(CfmFogConfig*))(Il2CppBase() + 0x1D1D678))(this);
	}
	template <typename T = void> T ValidateParameters() {
		return ((T (*)(CfmFogConfig*))(Il2CppBase() + 0x1D1D784))(this);
	}
	template <typename T = void> T UpdateParameterVariables() {
		return ((T (*)(CfmFogConfig*))(Il2CppBase() + 0x1D1D8D4))(this);
	}
	template <typename T = Il2CppString*> T GetModeKeyword() {
		return ((T (*)(CfmFogConfig*))(Il2CppBase() + 0x1D1DB04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(CfmFogConfig*))(Il2CppBase() + 0x1D1DBBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyParameters() {
		return ((T (*)(CfmFogConfig*))(Il2CppBase() + 0x1D1DBC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ApplyDefaultParameters() {
		return ((T (*)(CfmFogConfig*))(Il2CppBase() + 0x1D1DBCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ValidateParameters() {
		return ((T (*)(CfmFogConfig*))(Il2CppBase() + 0x1D1DBD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateParameterVariables() {
		return ((T (*)(CfmFogConfig*))(Il2CppBase() + 0x1D1DBDC))(this);
	}

};

}
