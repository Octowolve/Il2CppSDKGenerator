#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUParameterAccessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_ParameterAccessor"));
	}


	template <typename T = bool> static T GetToggle(uintptr_t asset, Il2CppString* paramName, uintptr_t* outValue) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2BE1FE8))(0, asset, paramName, outValue);
	}
	template <typename T = bool> static T SetToggle(uintptr_t asset, Il2CppString* paramName, bool setValue) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x2BE21E0))(0, asset, paramName, setValue);
	}
	template <typename T = bool> static T GetInt(uintptr_t asset, Il2CppString* paramName, uintptr_t* outValue) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2BE23B8))(0, asset, paramName, outValue);
	}
	template <typename T = bool> static T SetInt(uintptr_t asset, Il2CppString* paramName, int32_t setValue) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2BE25D0))(0, asset, paramName, setValue);
	}
	template <typename T = bool> static T GetFloat(uintptr_t asset, Il2CppString* paramName, uintptr_t* outValue) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2BE27C8))(0, asset, paramName, outValue);
	}
	template <typename T = bool> static T GetFloats(uintptr_t asset, Il2CppString* paramName, Il2CppArray<uintptr_t>** outValues) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x2BE29E0))(0, asset, paramName, outValues);
	}
	template <typename T = bool> static T SetFloat(uintptr_t asset, Il2CppString* paramName, float setValue) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, float))(Il2CppBase() + 0x2BE2BFC))(0, asset, paramName, setValue);
	}
	template <typename T = bool> static T SetFloats(uintptr_t asset, Il2CppString* paramName, Il2CppArray<uintptr_t>* setValues) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2BE2E00))(0, asset, paramName, setValues);
	}
	template <typename T = bool> static T GetString(uintptr_t asset, Il2CppString* paramName, uintptr_t* outValue) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2BE2FD8))(0, asset, paramName, outValue);
	}
	template <typename T = bool> static T SetString(uintptr_t asset, Il2CppString* paramName, Il2CppString* setValue) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2BE320C))(0, asset, paramName, setValue);
	}
	template <typename T = bool> static T SetChoice(uintptr_t asset, Il2CppString* paramName, int32_t setValue) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2BE3430))(0, asset, paramName, setValue);
	}
	template <typename T = bool> static T GetChoice(uintptr_t asset, Il2CppString* paramName, uintptr_t* outValue) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2BE3658))(0, asset, paramName, outValue);
	}
	template <typename T = bool> static T SetInputNode(uintptr_t asset, Il2CppString* paramName, uintptr_t obj, int32_t index) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x2BE385C))(0, asset, paramName, obj, index);
	}
	template <typename T = bool> static T GetInputNode(uintptr_t asset, Il2CppString* paramName, int32_t index, uintptr_t* obj) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t, uintptr_t*))(Il2CppBase() + 0x2BE3AC4))(0, asset, paramName, index, obj);
	}
	template <typename T = bool> static T GetColor(uintptr_t asset, Il2CppString* paramName, uintptr_t* getValue) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2BE3D64))(0, asset, paramName, getValue);
	}
	template <typename T = bool> static T SetColor(uintptr_t asset, Il2CppString* paramName, uintptr_t setValue) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2BE3F7C))(0, asset, paramName, setValue);
	}

};

}
