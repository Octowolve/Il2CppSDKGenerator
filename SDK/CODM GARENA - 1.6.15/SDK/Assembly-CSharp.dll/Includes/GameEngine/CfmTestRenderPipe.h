#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CfmTestRenderPipe
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CfmTestRenderPipe"));
	}

	template <typename T = uintptr_t> T& mRTFormat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Profile() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mUseSimpleACES() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mSimpleACESMat() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mUseBloom() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mBloomMaterial() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mMainRT() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& mWidth() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& mHeight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& mUseSecRT() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& mRTFormatChanged() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = int32_t> T& mEffectFlag() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& mChanged() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& mWorldCamera() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mPostprocessCamera() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& mInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mCommandBuffers() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mEffectTypeValues() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& mSupport() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& HDRFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& mUseOnePass() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAcesMat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClearedCommandBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreDestroyRT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyRT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateOnePass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateFullSreenRT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRTFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSupport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupMaterials() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupCommandBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimpleBloom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = uintptr_t> T get_Profile() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x41932F4))(this);
	}
	template <typename T = bool> T get_UseSimpleACES() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x41934E4))(this);
	}
	template <typename T = void> T set_UseSimpleACES(bool value) {
		return ((T (*)(CfmTestRenderPipe*, bool))(Il2CppBase() + 0x41934EC))(this, value);
	}
	template <typename T = uintptr_t> T get_mACESSetting() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x41934F4))(this);
	}
	template <typename T = uintptr_t> T GetAcesMat() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x4193538))(this);
	}
	template <typename T = uintptr_t> T get_mRazorACESRuntime() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x41935D8))(this);
	}
	template <typename T = bool> T get_UseBloom() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x4193924))(this);
	}
	template <typename T = void> T set_UseBloom(bool value) {
		return ((T (*)(CfmTestRenderPipe*, bool))(Il2CppBase() + 0x419392C))(this, value);
	}
	template <typename T = uintptr_t> T get_Bloom() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x4193990))(this);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x41939D4))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x4193A54))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x4193BF0))(this);
	}
	template <typename T = uintptr_t> T GetClearedCommandBuffer(uintptr_t type) {
		return ((T (*)(CfmTestRenderPipe*, uintptr_t))(Il2CppBase() + 0x4193D0C))(this, type);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x4193F38))(this);
	}
	template <typename T = void> T PreDestroyRT(uintptr_t rt) {
		return ((T (*)(CfmTestRenderPipe*, uintptr_t))(Il2CppBase() + 0x4194004))(this, rt);
	}
	template <typename T = void> T DestroyRT() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x4194188))(this);
	}
	template <typename T = void> T DestroyObj(uintptr_t obj) {
		return ((T (*)(CfmTestRenderPipe*, uintptr_t))(Il2CppBase() + 0x41942BC))(this, obj);
	}
	template <typename T = void> T UpdateOnePass() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x41943F4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x41945C8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x4195280))(this);
	}
	template <typename T = bool> T UpdateRT() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x41954A8))(this);
	}
	template <typename T = uintptr_t> T CreateFullSreenRT() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x4195608))(this);
	}
	template <typename T = void> T CheckRTFormat() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x419574C))(this);
	}
	template <typename T = void> T CheckSupport() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x41946BC))(this);
	}
	template <typename T = bool> T HasEffect() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x419581C))(this);
	}
	template <typename T = bool> T UpdateFlag() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x41958C8))(this);
	}
	template <typename T = void> T SetupMaterials() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x4194798))(this);
	}
	template <typename T = void> T SetupCommandBuffer() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x4195AAC))(this);
	}
	template <typename T = void> T UpdateParam() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x419495C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CfmTestRenderPipe*))(Il2CppBase() + 0x4196100))(this);
	}
	template <typename T = void> T SimpleBloom(uintptr_t from, uintptr_t cb) {
		return ((T (*)(CfmTestRenderPipe*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41962D0))(this, from, cb);
	}

};

}
