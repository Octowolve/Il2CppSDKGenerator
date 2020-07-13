#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Material
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Material"));
	}


	template <typename T = uintptr_t> T get_shader() {
		return ((T (*)(Material*))(Il2CppBase() + 0x4AAE06C))(this);
	}
	template <typename T = void> T set_shader(uintptr_t value) {
		return ((T (*)(Material*, uintptr_t))(Il2CppBase() + 0x4AAE104))(this, value);
	}
	template <typename T = uintptr_t> T get_color() {
		return ((T (*)(Material*))(Il2CppBase() + 0x4AAE1A4))(this);
	}
	template <typename T = void> T set_color(uintptr_t value) {
		return ((T (*)(Material*, uintptr_t))(Il2CppBase() + 0x4AAE2B8))(this, value);
	}
	template <typename T = uintptr_t> T get_mainTexture() {
		return ((T (*)(Material*))(Il2CppBase() + 0x4AAE3B4))(this);
	}
	template <typename T = void> T set_mainTexture(uintptr_t value) {
		return ((T (*)(Material*, uintptr_t))(Il2CppBase() + 0x4AAE470))(this, value);
	}
	template <typename T = Il2CppVector2> T get_mainTextureOffset() {
		return ((T (*)(Material*))(Il2CppBase() + 0x4AAE53C))(this);
	}
	template <typename T = void> T set_mainTextureOffset(Il2CppVector2 value) {
		return ((T (*)(Material*, Il2CppVector2))(Il2CppBase() + 0x4AAE62C))(this, value);
	}
	template <typename T = Il2CppVector2> T get_mainTextureScale() {
		return ((T (*)(Material*))(Il2CppBase() + 0x4AAE720))(this);
	}
	template <typename T = void> T set_mainTextureScale(Il2CppVector2 value) {
		return ((T (*)(Material*, Il2CppVector2))(Il2CppBase() + 0x4AAE810))(this, value);
	}
	template <typename T = void> T SetFloatImpl(int32_t nameID, float value) {
		return ((T (*)(Material*, int32_t, float))(Il2CppBase() + 0x4AAE904))(this, nameID, value);
	}
	template <typename T = void> T SetIntImpl(int32_t nameID, int32_t value) {
		return ((T (*)(Material*, int32_t, int32_t))(Il2CppBase() + 0x4AAE9AC))(this, nameID, value);
	}
	template <typename T = void> T SetColorImpl(int32_t nameID, uintptr_t value) {
		return ((T (*)(Material*, int32_t, uintptr_t))(Il2CppBase() + 0x4AAEA54))(this, nameID, value);
	}
	template <typename T = void> static T INTERNAL_CALL_SetColorImpl(uintptr_t self, int32_t nameID, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4AAEA94))(0, self, nameID, value);
	}
	template <typename T = void> T SetVectorImpl(int32_t nameID, uintptr_t value) {
		return ((T (*)(Material*, int32_t, uintptr_t))(Il2CppBase() + 0x4AAEB3C))(this, nameID, value);
	}
	template <typename T = void> static T INTERNAL_CALL_SetVectorImpl(uintptr_t self, int32_t nameID, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4AAEB7C))(0, self, nameID, value);
	}
	template <typename T = void> T SetMatrixImpl(int32_t nameID, uintptr_t value) {
		return ((T (*)(Material*, int32_t, uintptr_t))(Il2CppBase() + 0x4AAEC24))(this, nameID, value);
	}
	template <typename T = void> static T INTERNAL_CALL_SetMatrixImpl(uintptr_t self, int32_t nameID, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4AAECC0))(0, self, nameID, value);
	}
	template <typename T = void> T SetTextureImpl(int32_t nameID, uintptr_t value) {
		return ((T (*)(Material*, int32_t, uintptr_t))(Il2CppBase() + 0x4AAED68))(this, nameID, value);
	}
	template <typename T = float> T GetFloatImpl(int32_t nameID) {
		return ((T (*)(Material*, int32_t))(Il2CppBase() + 0x4AAEE10))(this, nameID);
	}
	template <typename T = uintptr_t> T GetColorImpl(int32_t nameID) {
		return ((T (*)(Material*, int32_t))(Il2CppBase() + 0x4AAEEB0))(this, nameID);
	}
	template <typename T = void> static T INTERNAL_CALL_GetColorImpl(uintptr_t self, int32_t nameID, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x4AAEEE4))(0, self, nameID, value);
	}
	template <typename T = uintptr_t> T GetVectorImpl(int32_t nameID) {
		return ((T (*)(Material*, int32_t))(Il2CppBase() + 0x4AAEF8C))(this, nameID);
	}
	template <typename T = void> static T INTERNAL_CALL_GetVectorImpl(uintptr_t self, int32_t nameID, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x4AAEFC0))(0, self, nameID, value);
	}
	template <typename T = uintptr_t> T GetTextureImpl(int32_t nameID) {
		return ((T (*)(Material*, int32_t))(Il2CppBase() + 0x4AAF068))(this, nameID);
	}
	template <typename T = uintptr_t> T GetTextureScaleAndOffsetImpl(int32_t nameID) {
		return ((T (*)(Material*, int32_t))(Il2CppBase() + 0x4AAF108))(this, nameID);
	}
	template <typename T = void> static T INTERNAL_CALL_GetTextureScaleAndOffsetImpl(uintptr_t self, int32_t nameID, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x4AAF13C))(0, self, nameID, value);
	}
	template <typename T = void> T SetTextureOffsetImpl(int32_t nameID, Il2CppVector2 offset) {
		return ((T (*)(Material*, int32_t, Il2CppVector2))(Il2CppBase() + 0x4AAF1E4))(this, nameID, offset);
	}
	template <typename T = void> static T INTERNAL_CALL_SetTextureOffsetImpl(uintptr_t self, int32_t nameID, uintptr_t offset) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4AAF214))(0, self, nameID, offset);
	}
	template <typename T = void> T SetTextureScaleImpl(int32_t nameID, Il2CppVector2 scale) {
		return ((T (*)(Material*, int32_t, Il2CppVector2))(Il2CppBase() + 0x4AAF2BC))(this, nameID, scale);
	}
	template <typename T = void> static T INTERNAL_CALL_SetTextureScaleImpl(uintptr_t self, int32_t nameID, uintptr_t scale) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4AAF2EC))(0, self, nameID, scale);
	}
	template <typename T = bool> T HasProperty(Il2CppString* propertyName) {
		return ((T (*)(Material*, Il2CppString*))(Il2CppBase() + 0x4AAF394))(this, propertyName);
	}
	template <typename T = bool> T HasProperty_1(int32_t nameID) {
		return ((T (*)(Material*, int32_t))(Il2CppBase() + 0x4AAF3BC))(this, nameID);
	}
	template <typename T = Il2CppString*> T GetTag(Il2CppString* tag, bool searchFallbacks, Il2CppString* defaultValue) {
		return ((T (*)(Material*, Il2CppString*, bool, Il2CppString*))(Il2CppBase() + 0x4AAF45C))(this, tag, searchFallbacks, defaultValue);
	}
	template <typename T = Il2CppString*> T GetTag_1(Il2CppString* tag, bool searchFallbacks) {
		return ((T (*)(Material*, Il2CppString*, bool))(Il2CppBase() + 0x4AAF50C))(this, tag, searchFallbacks);
	}
	template <typename T = int32_t> T get_passCount() {
		return ((T (*)(Material*))(Il2CppBase() + 0x4AAF5A8))(this);
	}
	template <typename T = bool> T SetPass(int32_t pass) {
		return ((T (*)(Material*, int32_t))(Il2CppBase() + 0x4AAF640))(this, pass);
	}
	template <typename T = int32_t> T get_renderQueue() {
		return ((T (*)(Material*))(Il2CppBase() + 0x4AAF6E0))(this);
	}
	template <typename T = void> T set_renderQueue(int32_t value) {
		return ((T (*)(Material*, int32_t))(Il2CppBase() + 0x4AAF778))(this, value);
	}
	template <typename T = void> static T Internal_CreateWithShader(uintptr_t mono, uintptr_t shader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AADE78))(0, mono, shader);
	}
	template <typename T = void> static T Internal_CreateWithMaterial(uintptr_t mono, uintptr_t source) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AADFCC))(0, mono, source);
	}
	template <typename T = void> T CopyPropertiesFromMaterial(uintptr_t mat) {
		return ((T (*)(Material*, uintptr_t))(Il2CppBase() + 0x4AAF818))(this, mat);
	}
	template <typename T = void> T EnableKeyword(Il2CppString* keyword) {
		return ((T (*)(Material*, Il2CppString*))(Il2CppBase() + 0x4AAF8B8))(this, keyword);
	}
	template <typename T = void> T DisableKeyword(Il2CppString* keyword) {
		return ((T (*)(Material*, Il2CppString*))(Il2CppBase() + 0x4AAF958))(this, keyword);
	}
	template <typename T = bool> T IsKeywordEnabled(Il2CppString* keyword) {
		return ((T (*)(Material*, Il2CppString*))(Il2CppBase() + 0x4AAF9F8))(this, keyword);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_shaderKeywords() {
		return ((T (*)(Material*))(Il2CppBase() + 0x4AAFA98))(this);
	}
	template <typename T = void> T set_shaderKeywords(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Material*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AAFB30))(this, value);
	}
	template <typename T = void> T set_globalIlluminationFlags(uintptr_t value) {
		return ((T (*)(Material*, uintptr_t))(Il2CppBase() + 0x4AAFBD0))(this, value);
	}
	template <typename T = bool> T get_enableInstancing() {
		return ((T (*)(Material*))(Il2CppBase() + 0x4AAFC70))(this);
	}
	template <typename T = void> T set_enableInstancing(bool value) {
		return ((T (*)(Material*, bool))(Il2CppBase() + 0x4AAFD08))(this, value);
	}
	template <typename T = void> T SetFloat(Il2CppString* name, float value) {
		return ((T (*)(Material*, Il2CppString*, float))(Il2CppBase() + 0x4AAFDA8))(this, name, value);
	}
	template <typename T = void> T SetFloat_1(int32_t nameID, float value) {
		return ((T (*)(Material*, int32_t, float))(Il2CppBase() + 0x4AAFDD8))(this, nameID, value);
	}
	template <typename T = void> T SetInt(Il2CppString* name, int32_t value) {
		return ((T (*)(Material*, Il2CppString*, int32_t))(Il2CppBase() + 0x4AAFDDC))(this, name, value);
	}
	template <typename T = void> T SetInt_1(int32_t nameID, int32_t value) {
		return ((T (*)(Material*, int32_t, int32_t))(Il2CppBase() + 0x4AAFE0C))(this, nameID, value);
	}
	template <typename T = void> T SetColor(Il2CppString* name, uintptr_t value) {
		return ((T (*)(Material*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4AAE360))(this, name, value);
	}
	template <typename T = void> T SetColor_1(int32_t nameID, uintptr_t value) {
		return ((T (*)(Material*, int32_t, uintptr_t))(Il2CppBase() + 0x4AAFE10))(this, nameID, value);
	}
	template <typename T = void> T SetVector(Il2CppString* name, uintptr_t value) {
		return ((T (*)(Material*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4AAFE50))(this, name, value);
	}
	template <typename T = void> T SetVector_1(int32_t nameID, uintptr_t value) {
		return ((T (*)(Material*, int32_t, uintptr_t))(Il2CppBase() + 0x4AAFEA4))(this, nameID, value);
	}
	template <typename T = void> T SetMatrix(Il2CppString* name, uintptr_t value) {
		return ((T (*)(Material*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4AAFEE4))(this, name, value);
	}
	template <typename T = void> T SetMatrix_1(int32_t nameID, uintptr_t value) {
		return ((T (*)(Material*, int32_t, uintptr_t))(Il2CppBase() + 0x4AAFF8C))(this, nameID, value);
	}
	template <typename T = void> T SetTexture(Il2CppString* name, uintptr_t value) {
		return ((T (*)(Material*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4AAE50C))(this, name, value);
	}
	template <typename T = void> T SetTexture_1(int32_t nameID, uintptr_t value) {
		return ((T (*)(Material*, int32_t, uintptr_t))(Il2CppBase() + 0x4AB000C))(this, nameID, value);
	}
	template <typename T = void> T SetTextureOffset(Il2CppString* name, Il2CppVector2 value) {
		return ((T (*)(Material*, Il2CppString*, Il2CppVector2))(Il2CppBase() + 0x4AAE6DC))(this, name, value);
	}
	template <typename T = void> T SetTextureOffset_1(int32_t nameID, Il2CppVector2 value) {
		return ((T (*)(Material*, int32_t, Il2CppVector2))(Il2CppBase() + 0x4AB0010))(this, nameID, value);
	}
	template <typename T = void> T SetTextureScale(Il2CppString* name, Il2CppVector2 value) {
		return ((T (*)(Material*, Il2CppString*, Il2CppVector2))(Il2CppBase() + 0x4AAE8C0))(this, name, value);
	}
	template <typename T = void> T SetTextureScale_1(int32_t nameID, Il2CppVector2 value) {
		return ((T (*)(Material*, int32_t, Il2CppVector2))(Il2CppBase() + 0x4AB0040))(this, nameID, value);
	}
	template <typename T = float> T GetFloat(Il2CppString* name) {
		return ((T (*)(Material*, Il2CppString*))(Il2CppBase() + 0x4AB0070))(this, name);
	}
	template <typename T = float> T GetFloat_1(int32_t nameID) {
		return ((T (*)(Material*, int32_t))(Il2CppBase() + 0x4AB0098))(this, nameID);
	}
	template <typename T = uintptr_t> T GetColor(Il2CppString* name) {
		return ((T (*)(Material*, Il2CppString*))(Il2CppBase() + 0x4AAE24C))(this, name);
	}
	template <typename T = uintptr_t> T GetColor_1(int32_t nameID) {
		return ((T (*)(Material*, int32_t))(Il2CppBase() + 0x4AB009C))(this, nameID);
	}
	template <typename T = uintptr_t> T GetVector(Il2CppString* name) {
		return ((T (*)(Material*, Il2CppString*))(Il2CppBase() + 0x4AB00E0))(this, name);
	}
	template <typename T = uintptr_t> T GetVector_1(int32_t nameID) {
		return ((T (*)(Material*, int32_t))(Il2CppBase() + 0x4AB014C))(this, nameID);
	}
	template <typename T = uintptr_t> T GetTexture(Il2CppString* name) {
		return ((T (*)(Material*, Il2CppString*))(Il2CppBase() + 0x4AAE448))(this, name);
	}
	template <typename T = uintptr_t> T GetTexture_1(int32_t nameID) {
		return ((T (*)(Material*, int32_t))(Il2CppBase() + 0x4AB0190))(this, nameID);
	}
	template <typename T = Il2CppVector2> T GetTextureOffset(Il2CppString* name) {
		return ((T (*)(Material*, Il2CppString*))(Il2CppBase() + 0x4AAE5E8))(this, name);
	}
	template <typename T = Il2CppVector2> T GetTextureOffset_1(int32_t nameID) {
		return ((T (*)(Material*, int32_t))(Il2CppBase() + 0x4AB0194))(this, nameID);
	}
	template <typename T = Il2CppVector2> T GetTextureScale(Il2CppString* name) {
		return ((T (*)(Material*, Il2CppString*))(Il2CppBase() + 0x4AAE7CC))(this, name);
	}
	template <typename T = Il2CppVector2> T GetTextureScale_1(int32_t nameID) {
		return ((T (*)(Material*, int32_t))(Il2CppBase() + 0x4AB01E8))(this, nameID);
	}

};

}
