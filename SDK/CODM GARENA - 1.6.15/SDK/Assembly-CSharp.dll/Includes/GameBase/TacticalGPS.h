#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalGPS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalGPS"));
	}

	template <typename T = uintptr_t> T& MarkSet() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& SatelliteMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& CheckMapSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> static T& AlphaErrorRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& TacticalGPSCheckData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Landmarks() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& RadarScale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& EastWestTransform() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& RegionConfig() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BoundaryConfig() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& NeedRotateRadar() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Satellites() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_OneMinusSatellitesNum() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_IsStart() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& _regionName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MagnifyLandmarkInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Position() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoReversePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReversePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScreenPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Position_ToScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Position_ToWorld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Screen_ToPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRadarCenterOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Startup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NormalizeScreenPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRegionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldLength2ScreenLengthScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = Il2CppQuaternion> T get_EastWestRotation() {
		return ((T (*)(TacticalGPS*))(Il2CppBase() + 0x30CD2E4))(this);
	}
	template <typename T = bool> T get_IsStart() {
		return ((T (*)(TacticalGPS*))(Il2CppBase() + 0x30CD3F8))(this);
	}
	template <typename T = void> T MagnifyLandmarkInfo(int32_t width) {
		return ((T (*)(TacticalGPS*, int32_t))(Il2CppBase() + 0x30CD400))(this, width);
	}
	template <typename T = bool> T InitParam() {
		return ((T (*)(TacticalGPS*))(Il2CppBase() + 0x30CD660))(this);
	}
	template <typename T = Il2CppVector2> T DoPosition(Il2CppVector2 inSceneLoc, uintptr_t inSatellite) {
		return ((T (*)(TacticalGPS*, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x30CDC80))(this, inSceneLoc, inSatellite);
	}
	template <typename T = Il2CppVector2> T DoScreen(Il2CppVector2 inMapUILoc, uintptr_t inSatellite) {
		return ((T (*)(TacticalGPS*, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x30CDDF4))(this, inMapUILoc, inSatellite);
	}
	template <typename T = Il2CppVector2> T Position(Il2CppVector2 inSceneLoc) {
		return ((T (*)(TacticalGPS*, Il2CppVector2))(Il2CppBase() + 0x30CDF7C))(this, inSceneLoc);
	}
	template <typename T = Il2CppVector2> T DoReversePosition(Il2CppVector2 inTVMapLoc, uintptr_t inSatellite) {
		return ((T (*)(TacticalGPS*, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x30CE150))(this, inTVMapLoc, inSatellite);
	}
	template <typename T = Il2CppVector2> T ReversePosition(Il2CppVector2 inTVMapLoc) {
		return ((T (*)(TacticalGPS*, Il2CppVector2))(Il2CppBase() + 0x30CE2C4))(this, inTVMapLoc);
	}
	template <typename T = Il2CppVector2> T ScreenPos(Il2CppVector2 inMapUILoc) {
		return ((T (*)(TacticalGPS*, Il2CppVector2))(Il2CppBase() + 0x30CE498))(this, inMapUILoc);
	}
	template <typename T = Il2CppVector2> T Position_ToScreen(Il2CppVector3 inSceneLoc) {
		return ((T (*)(TacticalGPS*, Il2CppVector3))(Il2CppBase() + 0x30CE66C))(this, inSceneLoc);
	}
	template <typename T = Il2CppVector3> T Position_ToWorld(Il2CppVector2 inMapUIPos) {
		return ((T (*)(TacticalGPS*, Il2CppVector2))(Il2CppBase() + 0x30CE794))(this, inMapUIPos);
	}
	template <typename T = Il2CppVector3> T Screen_ToPosition(Il2CppVector2 inTVMapLoc) {
		return ((T (*)(TacticalGPS*, Il2CppVector2))(Il2CppBase() + 0x30CE8B8))(this, inTVMapLoc);
	}
	template <typename T = Il2CppVector2> T GetRadarCenterOffset() {
		return ((T (*)(TacticalGPS*))(Il2CppBase() + 0x30CE9E8))(this);
	}
	template <typename T = bool> T Startup() {
		return ((T (*)(TacticalGPS*))(Il2CppBase() + 0x30CEB28))(this);
	}
	template <typename T = Il2CppVector2> T NormalizeScreenPos(Il2CppVector2 inScreenLoc) {
		return ((T (*)(TacticalGPS*, Il2CppVector2))(Il2CppBase() + 0x30CED58))(this, inScreenLoc);
	}
	template <typename T = Il2CppString*> T GetRegionName(Il2CppVector3 pos) {
		return ((T (*)(TacticalGPS*, Il2CppVector3))(Il2CppBase() + 0x30CEF18))(this, pos);
	}
	template <typename T = float> T WorldLength2ScreenLengthScale() {
		return ((T (*)(TacticalGPS*))(Il2CppBase() + 0x30CF550))(this);
	}

};

}
