#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmUtility"));
	}

	template <typename T = uintptr_t> static T& encoding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_Encoding() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F1746C))(0);
	}
	template <typename T = uintptr_t> static T GetVariableType(uintptr_t variable) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F17534))(0, variable);
	}
	template <typename T = uintptr_t> static T GetVariableRealType(uintptr_t variableType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F17CC4))(0, variableType);
	}
	template <typename T = uintptr_t> static T GetEnum(uintptr_t enumType, int32_t enumValue) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x2F18260))(0, enumType, enumValue);
	}
	template <typename T = void*> static T FsmEventToByteArray(uintptr_t fsmEvent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EE78BC))(0, fsmEvent);
	}
	template <typename T = void*> static T FsmFloatToByteArray(uintptr_t fsmFloat) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EE6C34))(0, fsmFloat);
	}
	template <typename T = void*> static T FsmIntToByteArray(uintptr_t fsmInt) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EE6D80))(0, fsmInt);
	}
	template <typename T = void*> static T FsmBoolToByteArray(uintptr_t fsmBool) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EE6ECC))(0, fsmBool);
	}
	template <typename T = void*> static T FsmVector2ToByteArray(uintptr_t fsmVector2) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EE7018))(0, fsmVector2);
	}
	template <typename T = void*> static T FsmVector3ToByteArray(uintptr_t fsmVector3) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EE7168))(0, fsmVector3);
	}
	template <typename T = void*> static T FsmRectToByteArray(uintptr_t fsmRect) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EE72C0))(0, fsmRect);
	}
	template <typename T = void*> static T FsmQuaternionToByteArray(uintptr_t fsmQuaternion) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EE7420))(0, fsmQuaternion);
	}
	template <typename T = void*> static T FsmColorToByteArray(uintptr_t fsmColor) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EE7580))(0, fsmColor);
	}
	template <typename T = void*> static T ColorToByteArray(uintptr_t color) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EE6598))(0, color);
	}
	template <typename T = void*> static T Vector2ToByteArray(Il2CppVector2 vector2) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x2EE66D0))(0, vector2);
	}
	template <typename T = void*> static T Vector3ToByteArray(Il2CppVector3 vector3) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x2EE67F4))(0, vector3);
	}
	template <typename T = void*> static T Vector4ToByteArray(uintptr_t vector4) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EE6944))(0, vector4);
	}
	template <typename T = void*> static T RectToByteArray(Il2CppRect rect) {
		return ((T (*)(void *, Il2CppRect))(Il2CppBase() + 0x2EE6AC4))(0, rect);
	}
	template <typename T = void*> static T QuaternionToByteArray(Il2CppQuaternion quaternion) {
		return ((T (*)(void *, Il2CppQuaternion))(Il2CppBase() + 0x2F18338))(0, quaternion);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T StringToByteArray(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2EE79AC))(0, str);
	}
	template <typename T = Il2CppString*> static T ByteArrayToString(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2F18470))(0, bytes);
	}
	template <typename T = Il2CppString*> static T ByteArrayToString_1(Il2CppArray<uintptr_t>* bytes, int32_t startIndex, int32_t count) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2ED7B1C))(0, bytes, startIndex, count);
	}
	template <typename T = uintptr_t> static T ByteArrayToFsmEvent(Il2CppArray<uintptr_t>* bytes, int32_t startIndex, int32_t size) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2ED3E34))(0, bytes, startIndex, size);
	}
	template <typename T = uintptr_t> static T ByteArrayToFsmFloat(uintptr_t fsm, Il2CppArray<uintptr_t>* bytes, int32_t startIndex, int32_t totalLength) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2ED9BF4))(0, fsm, bytes, startIndex, totalLength);
	}
	template <typename T = uintptr_t> static T ByteArrayToFsmInt(uintptr_t fsm, Il2CppArray<uintptr_t>* bytes, int32_t startIndex, int32_t totalLength) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2ED9DB0))(0, fsm, bytes, startIndex, totalLength);
	}
	template <typename T = uintptr_t> static T ByteArrayToFsmBool(uintptr_t fsm, Il2CppArray<uintptr_t>* bytes, int32_t startIndex, int32_t totalLength) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2ED9F68))(0, fsm, bytes, startIndex, totalLength);
	}
	template <typename T = uintptr_t> static T ByteArrayToColor(Il2CppArray<uintptr_t>* bytes, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2ED78D4))(0, bytes, startIndex);
	}
	template <typename T = Il2CppVector2> static T ByteArrayToVector2(Il2CppArray<uintptr_t>* bytes, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2ED7954))(0, bytes, startIndex);
	}
	template <typename T = uintptr_t> static T ByteArrayToFsmVector2(uintptr_t fsm, Il2CppArray<uintptr_t>* bytes, int32_t startIndex, int32_t totalLength) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2EDA120))(0, fsm, bytes, startIndex, totalLength);
	}
	template <typename T = Il2CppVector3> static T ByteArrayToVector3(Il2CppArray<uintptr_t>* bytes, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2ED79A8))(0, bytes, startIndex);
	}
	template <typename T = uintptr_t> static T ByteArrayToFsmVector3(uintptr_t fsm, Il2CppArray<uintptr_t>* bytes, int32_t startIndex, int32_t totalLength) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2EDA2E0))(0, fsm, bytes, startIndex, totalLength);
	}
	template <typename T = uintptr_t> static T ByteArrayToFsmRect(uintptr_t fsm, Il2CppArray<uintptr_t>* bytes, int32_t startIndex, int32_t totalLength) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2EDA6B0))(0, fsm, bytes, startIndex, totalLength);
	}
	template <typename T = uintptr_t> static T ByteArrayToFsmQuaternion(uintptr_t fsm, Il2CppArray<uintptr_t>* bytes, int32_t startIndex, int32_t totalLength) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2EDA87C))(0, fsm, bytes, startIndex, totalLength);
	}
	template <typename T = uintptr_t> static T ByteArrayToFsmColor(uintptr_t fsm, Il2CppArray<uintptr_t>* bytes, int32_t startIndex, int32_t totalLength) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2EDA4E4))(0, fsm, bytes, startIndex, totalLength);
	}
	template <typename T = uintptr_t> static T ByteArrayToVector4(Il2CppArray<uintptr_t>* bytes, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2ED7A1C))(0, bytes, startIndex);
	}
	template <typename T = Il2CppRect> static T ByteArrayToRect(Il2CppArray<uintptr_t>* bytes, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2ED7A9C))(0, bytes, startIndex);
	}
	template <typename T = Il2CppQuaternion> static T ByteArrayToQuaternion(Il2CppArray<uintptr_t>* bytes, int32_t startIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2EE076C))(0, bytes, startIndex);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ReadToEnd(uintptr_t stream) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F18538))(0, stream);
	}
	template <typename T = Il2CppString*> static T StripNamespace(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2ED0CC4))(0, name);
	}
	template <typename T = Il2CppString*> static T GetPath(uintptr_t state) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2ED0F0C))(0, state);
	}
	template <typename T = Il2CppString*> static T GetPath_1(uintptr_t state, uintptr_t action) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EEB028))(0, state, action);
	}
	template <typename T = Il2CppString*> static T GetPath_2(uintptr_t state, uintptr_t action, Il2CppString* parameter) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2F187FC))(0, state, action, parameter);
	}
	template <typename T = Il2CppString*> static T GetFullFsmLabel(uintptr_t fsm) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EF48AC))(0, fsm);
	}
	template <typename T = Il2CppString*> static T GetFullFsmLabel_1(uintptr_t fsm) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F1896C))(0, fsm);
	}
	template <typename T = Il2CppString*> static T GetFsmLabel(uintptr_t fsm) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F188E8))(0, fsm);
	}
	template <typename T = uintptr_t> static T GetOwner(uintptr_t fsm) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2F18B24))(0, fsm);
	}

};

}
