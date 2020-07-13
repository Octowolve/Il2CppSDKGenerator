#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUPluginSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_PluginSettings"));
	}


	template <typename T = Il2CppString*> static T get_HoudiniEngineEnvFilePath() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BE9074))(0);
	}
	template <typename T = void> static T set_HoudiniEngineEnvFilePath(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BE93EC))(0, value);
	}
	template <typename T = Il2CppString*> static T get_HoudiniEngineJobDir() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BE956C))(0);
	}
	template <typename T = bool> static T get_CookingEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BB7E50))(0);
	}
	template <typename T = void> static T set_CookingEnabled(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2BE9A4C))(0, value);
	}
	template <typename T = bool> static T get_CookingTriggersDownstreamCooks() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BE9C18))(0);
	}
	template <typename T = void> static T set_CookingTriggersDownstreamCooks(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2BE9CC8))(0, value);
	}
	template <typename T = bool> static T get_CookTemplatedGeos() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BA5D94))(0);
	}
	template <typename T = void> static T set_CookTemplatedGeos(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2BE9D64))(0, value);
	}
	template <typename T = bool> static T get_PushUnityTransformToHoudini() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BB6710))(0);
	}
	template <typename T = void> static T set_PushUnityTransformToHoudini(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2BE9E00))(0, value);
	}
	template <typename T = bool> static T get_TransformChangeTriggersCooks() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BE9E9C))(0);
	}
	template <typename T = void> static T set_TransformChangeTriggersCooks(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2BE9F4C))(0, value);
	}
	template <typename T = Il2CppString*> static T get_CollisionGroupName() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BE9FE8))(0);
	}
	template <typename T = void> static T set_CollisionGroupName(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BEA0B0))(0, value);
	}
	template <typename T = Il2CppString*> static T get_RenderedCollisionGroupName() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEA14C))(0);
	}
	template <typename T = void> static T set_RenderedCollisionGroupName(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BEA214))(0, value);
	}
	template <typename T = Il2CppString*> static T get_UnityMaterialAttribName() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BD6E04))(0);
	}
	template <typename T = void> static T set_UnityMaterialAttribName(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BEA2B0))(0, value);
	}
	template <typename T = Il2CppString*> static T get_UnitySubMaterialAttribName() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEA34C))(0);
	}
	template <typename T = void> static T set_UnitySubMaterialAttribName(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BEA414))(0, value);
	}
	template <typename T = Il2CppString*> static T get_UnitySubMaterialIndexAttribName() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEA4B0))(0);
	}
	template <typename T = void> static T set_UnitySubMaterialIndexAttribName(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BEA578))(0, value);
	}
	template <typename T = Il2CppString*> static T get_UnityTagAttributeName() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEA614))(0);
	}
	template <typename T = void> static T set_UnityTagAttributeName(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BEA6DC))(0, value);
	}
	template <typename T = Il2CppString*> static T get_UnityStaticAttributeName() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEA778))(0);
	}
	template <typename T = void> static T set_UnityStaticAttributeName(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BEA840))(0, value);
	}
	template <typename T = Il2CppString*> static T get_UnityScriptAttributeName() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEA8DC))(0);
	}
	template <typename T = void> static T set_UnityScriptAttributeName(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BEA9A4))(0, value);
	}
	template <typename T = float> static T get_ImageGamma() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BDDF18))(0);
	}
	template <typename T = void> static T set_ImageGamma(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2BEABA4))(0, value);
	}
	template <typename T = float> static T get_NormalGenerationThresholdAngle() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEAD70))(0);
	}
	template <typename T = void> static T set_NormalGenerationThresholdAngle(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2BEAE28))(0, value);
	}
	template <typename T = Il2CppString*> static T get_LastLoadHDAPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEAEC4))(0);
	}
	template <typename T = void> static T set_LastLoadHDAPath(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BEAFCC))(0, value);
	}
	template <typename T = Il2CppString*> static T get_LastLoadHIPPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEB068))(0);
	}
	template <typename T = void> static T set_LastLoadHIPPath(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BEB170))(0, value);
	}
	template <typename T = Il2CppString*> static T get_InstanceAttr() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BDFA80))(0);
	}
	template <typename T = void> static T set_InstanceAttr(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BEB20C))(0, value);
	}
	template <typename T = Il2CppString*> static T get_UnityInstanceAttr() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BDFB48))(0);
	}
	template <typename T = void> static T set_UnityInstanceAttr(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BEB2A8))(0, value);
	}
	template <typename T = Il2CppString*> static T get_UnityInputMeshAttr() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BD6ECC))(0);
	}
	template <typename T = void> static T set_UnityInputMeshAttr(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BEB344))(0, value);
	}
	template <typename T = float> static T get_PinSize() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEB3E0))(0);
	}
	template <typename T = void> static T set_PinSize(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2BEB490))(0, value);
	}
	template <typename T = uintptr_t> static T get_PinColor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEB52C))(0);
	}
	template <typename T = void> static T set_PinColor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BEB634))(0, value);
	}
	template <typename T = uintptr_t> static T get_LineColor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEB708))(0);
	}
	template <typename T = void> static T set_LineColor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BEB80C))(0, value);
	}
	template <typename T = Il2CppString*> static T get_EditorOnly_Tag() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BAFA38))(0);
	}
	template <typename T = void> static T set_EditorOnly_Tag(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BEB8E0))(0, value);
	}
	template <typename T = Il2CppString*> static T get_HDAData_Name() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BAF970))(0);
	}
	template <typename T = void> static T set_HDAData_Name(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BEBA4C))(0, value);
	}
	template <typename T = Il2CppString*> static T get_Session_PipeName() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEBAE8))(0);
	}
	template <typename T = void> static T set_Session_PipeName(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BEBBB0))(0, value);
	}
	template <typename T = Il2CppString*> static T get_Session_Localhost() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEBC4C))(0);
	}
	template <typename T = void> static T set_Session_Localhost(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BEBD14))(0, value);
	}
	template <typename T = int32_t> static T get_Session_Port() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEBDB0))(0);
	}
	template <typename T = void> static T set_Session_Port(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2BEBFB8))(0, value);
	}
	template <typename T = float> static T get_Session_Timeout() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEC184))(0);
	}
	template <typename T = void> static T set_Session_Timeout(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x2BEC23C))(0, value);
	}
	template <typename T = bool> static T get_Session_AutoClose() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEC2D8))(0);
	}
	template <typename T = void> static T set_Session_AutoClose(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2BEC388))(0, value);
	}
	template <typename T = bool> static T get_Curves_ShowInSceneView() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BAA3E4))(0);
	}
	template <typename T = void> static T set_Curves_ShowInSceneView(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2BEC424))(0, value);
	}
	template <typename T = Il2CppString*> static T get_AssetCachePath() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEC4C0))(0);
	}
	template <typename T = void> static T set_AssetCachePath(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BEC588))(0, value);
	}
	template <typename T = bool> static T get_UseFullPathNamesForOutput() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BA80F8))(0);
	}
	template <typename T = void> static T set_UseFullPathNamesForOutput(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2BEC624))(0, value);
	}

};

}
