#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_Handle"));
	}

	template <typename T = Il2CppString*> T& _handleName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _handleType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _handleIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _handleParamTranslateBinding() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _handleParamRotateBinding() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _handleParamScaleBinding() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& _handlePosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppQuaternion> T& _handleRotation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& _handleScale() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _rstOrder() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& _xyzOrder() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _convertedTransformEuler() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = Il2CppString*> T get_HandleName() {
		return ((T (*)(HEUHandle*))(Il2CppBase() + 0x2BACFC8))(this);
	}
	template <typename T = uintptr_t> T get_HandleType() {
		return ((T (*)(HEUHandle*))(Il2CppBase() + 0x2BACFD0))(this);
	}
	template <typename T = uintptr_t> T get_RSTOrder() {
		return ((T (*)(HEUHandle*))(Il2CppBase() + 0x2BACFD8))(this);
	}
	template <typename T = uintptr_t> T get_XYZOrder() {
		return ((T (*)(HEUHandle*))(Il2CppBase() + 0x2BACFE0))(this);
	}
	template <typename T = uintptr_t> T get_ConvertedTransformEuler() {
		return ((T (*)(HEUHandle*))(Il2CppBase() + 0x2BACFE8))(this);
	}
	template <typename T = bool> T HasTranslateHandle() {
		return ((T (*)(HEUHandle*))(Il2CppBase() + 0x2BAD000))(this);
	}
	template <typename T = bool> T HasRotateHandle() {
		return ((T (*)(HEUHandle*))(Il2CppBase() + 0x2BAD010))(this);
	}
	template <typename T = bool> T HasScaleHandle() {
		return ((T (*)(HEUHandle*))(Il2CppBase() + 0x2BAD020))(this);
	}
	template <typename T = bool> T IsTranslateHandleDisabled() {
		return ((T (*)(HEUHandle*))(Il2CppBase() + 0x2BAD030))(this);
	}
	template <typename T = bool> T IsRotateHandleDisabled() {
		return ((T (*)(HEUHandle*))(Il2CppBase() + 0x2BAD050))(this);
	}
	template <typename T = bool> T IsScaleHandleDisabled() {
		return ((T (*)(HEUHandle*))(Il2CppBase() + 0x2BAD070))(this);
	}
	template <typename T = uintptr_t> T GetTranslateBinding() {
		return ((T (*)(HEUHandle*))(Il2CppBase() + 0x2BAD090))(this);
	}
	template <typename T = uintptr_t> T GetRotateBinding() {
		return ((T (*)(HEUHandle*))(Il2CppBase() + 0x2BAD098))(this);
	}
	template <typename T = uintptr_t> T GetScaleBinding() {
		return ((T (*)(HEUHandle*))(Il2CppBase() + 0x2BAD0A0))(this);
	}
	template <typename T = Il2CppVector3> T get_HandlePosition() {
		return ((T (*)(HEUHandle*))(Il2CppBase() + 0x2BAD0A8))(this);
	}
	template <typename T = Il2CppQuaternion> T get_HandleRotation() {
		return ((T (*)(HEUHandle*))(Il2CppBase() + 0x2BAD0BC))(this);
	}
	template <typename T = Il2CppVector3> T get_HandleScale() {
		return ((T (*)(HEUHandle*))(Il2CppBase() + 0x2BAD0CC))(this);
	}
	template <typename T = bool> T SetupHandle(uintptr_t session, int32_t assetID, int32_t handleIndex, Il2CppString* handleName, uintptr_t handleType, uintptr_t handleInfo, uintptr_t parameters) {
		return ((T (*)(HEUHandle*, uintptr_t, int32_t, int32_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BAD0E0))(this, session, assetID, handleIndex, handleName, handleType, handleInfo, parameters);
	}
	template <typename T = void> T CleanUp() {
		return ((T (*)(HEUHandle*))(Il2CppBase() + 0x2BAE99C))(this);
	}
	template <typename T = void> T GenerateTransform(uintptr_t session, uintptr_t parameters) {
		return ((T (*)(HEUHandle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BAE028))(this, session, parameters);
	}
	template <typename T = bool> T GetUpdatedPosition(uintptr_t asset, uintptr_t inPosition) {
		return ((T (*)(HEUHandle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BAE9D4))(this, asset, inPosition);
	}
	template <typename T = bool> T GetUpdatedRotation(uintptr_t asset, uintptr_t inRotation) {
		return ((T (*)(HEUHandle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BAEC40))(this, asset, inRotation);
	}
	template <typename T = bool> static T IsSpecialRSTOrder(uintptr_t rstOrder) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BAE9B0))(0, rstOrder);
	}

};

}
