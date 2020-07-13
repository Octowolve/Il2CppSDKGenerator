#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_Curve"));
	}

	template <typename T = int32_t> T& _geoID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& _points() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _vertices() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _isEditable() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _parameters() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _bUploadParameterPreset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _curveName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _targetGameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _isGeoCurve() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _editState() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& PreferredNextInteractionMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_GeoID() {
		return ((T (*)(HEUCurve*))(Il2CppBase() + 0x4C6AEE8))(this);
	}
	template <typename T = bool> T IsEditable() {
		return ((T (*)(HEUCurve*))(Il2CppBase() + 0x4C6AEF0))(this);
	}
	template <typename T = uintptr_t> T get_Parameters() {
		return ((T (*)(HEUCurve*))(Il2CppBase() + 0x4C6AEF8))(this);
	}
	template <typename T = void> T SetUploadParameterPreset(bool bValue) {
		return ((T (*)(HEUCurve*, bool))(Il2CppBase() + 0x4C6AF00))(this, bValue);
	}
	template <typename T = Il2CppString*> T get_CurveName() {
		return ((T (*)(HEUCurve*))(Il2CppBase() + 0x4C6AF08))(this);
	}
	template <typename T = bool> T IsGeoCurve() {
		return ((T (*)(HEUCurve*))(Il2CppBase() + 0x4C6AF10))(this);
	}
	template <typename T = uintptr_t> T get_EditState() {
		return ((T (*)(HEUCurve*))(Il2CppBase() + 0x4C6AF18))(this);
	}
	template <typename T = uintptr_t> static T CreateSetupCurve(uintptr_t parentAsset, bool isEditable, Il2CppString* curveName, int32_t geoID, bool bGeoCurve) {
		return ((T (*)(void *, uintptr_t, bool, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x4C6AF20))(0, parentAsset, isEditable, curveName, geoID, bGeoCurve);
	}
	template <typename T = void> T DestroyAllData() {
		return ((T (*)(HEUCurve*))(Il2CppBase() + 0x4C6B004))(this);
	}
	template <typename T = void> T SetCurveName(Il2CppString* name) {
		return ((T (*)(HEUCurve*, Il2CppString*))(Il2CppBase() + 0x4C6B15C))(this, name);
	}
	template <typename T = void> T UploadParameterPreset(uintptr_t session, int32_t geoID, uintptr_t parentAsset) {
		return ((T (*)(HEUCurve*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4C6B240))(this, session, geoID, parentAsset);
	}
	template <typename T = void> T ResetCurveParameters(uintptr_t session, uintptr_t parentAsset) {
		return ((T (*)(HEUCurve*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C6B394))(this, session, parentAsset);
	}
	template <typename T = void> T SetCurveParameterPreset(uintptr_t session, uintptr_t parentAsset, Il2CppArray<uintptr_t>* parameterPreset) {
		return ((T (*)(HEUCurve*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C6B4BC))(this, session, parentAsset, parameterPreset);
	}
	template <typename T = void> T UpdateCurve(uintptr_t session, int32_t partID) {
		return ((T (*)(HEUCurve*, uintptr_t, int32_t))(Il2CppBase() + 0x4C6B5E8))(this, session, partID);
	}
	template <typename T = void> T GenerateMesh(uintptr_t inGameObject) {
		return ((T (*)(HEUCurve*, uintptr_t))(Il2CppBase() + 0x4C6B944))(this, inGameObject);
	}
	template <typename T = void> T SyncFromParameters(uintptr_t session, uintptr_t parentAsset) {
		return ((T (*)(HEUCurve*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C6BE48))(this, session, parentAsset);
	}
	template <typename T = void> T ProjectToColliders(uintptr_t parentAsset, Il2CppVector3 rayDirection, float rayDistance) {
		return ((T (*)(HEUCurve*, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x4C6C614))(this, parentAsset, rayDirection, rayDistance);
	}
	template <typename T = Il2CppString*> static T GetPointsString(Il2CppList<Il2CppVector3>* points) {
		return ((T (*)(void *, Il2CppList<Il2CppVector3>*))(Il2CppBase() + 0x4C6CD14))(0, points);
	}
	template <typename T = void> T SetEditState(uintptr_t editState) {
		return ((T (*)(HEUCurve*, uintptr_t))(Il2CppBase() + 0x4C6AFFC))(this, editState);
	}
	template <typename T = void> T SetCurvePoint(int32_t pointIndex, Il2CppVector3 newPosition) {
		return ((T (*)(HEUCurve*, int32_t, Il2CppVector3))(Il2CppBase() + 0x4C6D02C))(this, pointIndex, newPosition);
	}
	template <typename T = Il2CppVector3> T GetCurvePoint(int32_t pointIndex) {
		return ((T (*)(HEUCurve*, int32_t))(Il2CppBase() + 0x4C6D128))(this, pointIndex);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T GetAllPoints() {
		return ((T (*)(HEUCurve*))(Il2CppBase() + 0x4C6D220))(this);
	}
	template <typename T = int32_t> T GetNumPoints() {
		return ((T (*)(HEUCurve*))(Il2CppBase() + 0x4C6D228))(this);
	}
	template <typename T = Il2CppVector3> T GetTransformedPoint(int32_t pointIndex) {
		return ((T (*)(HEUCurve*, int32_t))(Il2CppBase() + 0x4C6D2C0))(this, pointIndex);
	}
	template <typename T = Il2CppVector3> T GetTransformedPosition(Il2CppVector3 inPosition) {
		return ((T (*)(HEUCurve*, Il2CppVector3))(Il2CppBase() + 0x4C6D3E0))(this, inPosition);
	}
	template <typename T = Il2CppVector3> T GetInvertedTransformedPosition(Il2CppVector3 inPosition) {
		return ((T (*)(HEUCurve*, Il2CppVector3))(Il2CppBase() + 0x4C6D448))(this, inPosition);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetVertices() {
		return ((T (*)(HEUCurve*))(Il2CppBase() + 0x4C6D4B0))(this);
	}
	template <typename T = void> T SetCurveGeometryVisibility(bool bVisible) {
		return ((T (*)(HEUCurve*, bool))(Il2CppBase() + 0x4C6D4B8))(this, bVisible);
	}
	template <typename T = void> T DownloadPresetData(uintptr_t session) {
		return ((T (*)(HEUCurve*, uintptr_t))(Il2CppBase() + 0x4C6C534))(this, session);
	}
	template <typename T = void> T UploadPresetData(uintptr_t session) {
		return ((T (*)(HEUCurve*, uintptr_t))(Il2CppBase() + 0x4C6D60C))(this, session);
	}
	template <typename T = void> T DownloadAsDefaultPresetData(uintptr_t session) {
		return ((T (*)(HEUCurve*, uintptr_t))(Il2CppBase() + 0x4C6D6EC))(this, session);
	}

};

}
