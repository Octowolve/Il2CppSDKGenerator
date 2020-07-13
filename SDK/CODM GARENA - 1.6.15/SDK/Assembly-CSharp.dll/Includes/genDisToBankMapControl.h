#pragma once
#include <Il2Cpp/Il2Cpp.h>

class genDisToBankMapControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "genDisToBankMapControl"));
	}

	template <typename T = uintptr_t> T& m_terrainNode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_vList_cutTris() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_cutSegList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_cutY() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_maxTranspDis() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& m_disToBankMapSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_disToBankMap() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppRect> T& m_rect() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_mat_ocean() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& m_saveFolder() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_genSegList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_genDisToBankMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_saveDisToBankMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_calculateRectForSegList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_calculateDisFromVtoSegList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_disPointToLineSeg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_calTriNorm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ManhattanDis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isSamePoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isSameLineseg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_lineIntersectWithHorizontalPlane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Start() {
		return ((T (*)(genDisToBankMapControl*))(Il2CppBase() + 0x4453D20))(this);
	}
	template <typename T = void> T genSegList() {
		return ((T (*)(genDisToBankMapControl*))(Il2CppBase() + 0x4453DB8))(this);
	}
	template <typename T = void> T genDisToBankMap() {
		return ((T (*)(genDisToBankMapControl*))(Il2CppBase() + 0x4454DEC))(this);
	}
	template <typename T = void> T saveDisToBankMap() {
		return ((T (*)(genDisToBankMapControl*))(Il2CppBase() + 0x44558F8))(this);
	}
	template <typename T = Il2CppRect> T calculateRectForSegList(Il2CppList<uintptr_t>* segList, float extend) {
		return ((T (*)(genDisToBankMapControl*, Il2CppList<uintptr_t>*, float))(Il2CppBase() + 0x44552CC))(this, segList, extend);
	}
	template <typename T = float> T calculateDisFromVtoSegList(Il2CppVector3 v, Il2CppList<uintptr_t>* segList, float maxDis) {
		return ((T (*)(genDisToBankMapControl*, Il2CppVector3, Il2CppList<uintptr_t>*, float))(Il2CppBase() + 0x4455628))(this, v, segList, maxDis);
	}
	template <typename T = float> T disPointToLineSeg(Il2CppVector2 v0, Il2CppVector2 v1, Il2CppVector2 p) {
		return ((T (*)(genDisToBankMapControl*, Il2CppVector2, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x4455990))(this, v0, v1, p);
	}
	template <typename T = Il2CppVector3> T calTriNorm(Il2CppVector3 v0, Il2CppVector3 v1, Il2CppVector3 v2) {
		return ((T (*)(genDisToBankMapControl*, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4454C34))(this, v0, v1, v2);
	}
	template <typename T = float> T ManhattanDis(Il2CppVector3 p1, Il2CppVector3 p2) {
		return ((T (*)(genDisToBankMapControl*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4455CAC))(this, p1, p2);
	}
	template <typename T = bool> T isSamePoint(Il2CppVector3 p1, Il2CppVector3 p2) {
		return ((T (*)(genDisToBankMapControl*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4455E04))(this, p1, p2);
	}
	template <typename T = bool> T isSameLineseg(uintptr_t seg1, uintptr_t seg2) {
		return ((T (*)(genDisToBankMapControl*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4455F18))(this, seg1, seg2);
	}
	template <typename T = Il2CppVector3> T lineIntersectWithHorizontalPlane(Il2CppVector3 p1, Il2CppVector3 p2, float planeY) {
		return ((T (*)(genDisToBankMapControl*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4454AAC))(this, p1, p2, planeY);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(genDisToBankMapControl*))(Il2CppBase() + 0x44560F4))(this);
	}

};

}
