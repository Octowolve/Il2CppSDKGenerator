#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class GuideLine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "GuideLine"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_PointsList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_Line() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_TrailRender() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_MeshRenderer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Vertices() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Uv() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_MeshIndices() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& m_StartPos() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& m_NextPos() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& vecTo() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_Index() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& CountDownStart() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_EffectType() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_LerpTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_MinUV() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& m_IntervalUVChange() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_TempPointsArray() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> static T& DrawGuideWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_StartChangeUVTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildMeshPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeUV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawMyMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenderTrail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThroughLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StepEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(GuideLine*))(Il2CppBase() + 0x49C23F0))(this);
	}
	template <typename T = Il2CppVector3> T BuildMeshPoints(uintptr_t centerPt, float offsetValue) {
		return ((T (*)(GuideLine*, uintptr_t, float))(Il2CppBase() + 0x49C2B4C))(this, centerPt, offsetValue);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GuideLine*))(Il2CppBase() + 0x49C2CD8))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(GuideLine*))(Il2CppBase() + 0x49C3978))(this);
	}
	template <typename T = void> T ChangeUV() {
		return ((T (*)(GuideLine*))(Il2CppBase() + 0x49C3BA4))(this);
	}
	template <typename T = void> T DrawMyMesh() {
		return ((T (*)(GuideLine*))(Il2CppBase() + 0x49C3A80))(this);
	}
	template <typename T = void> T RenderTrail() {
		return ((T (*)(GuideLine*))(Il2CppBase() + 0x49C3538))(this);
	}
	template <typename T = void> T ThroughLine() {
		return ((T (*)(GuideLine*))(Il2CppBase() + 0x49C30AC))(this);
	}
	template <typename T = void> T StepEffect() {
		return ((T (*)(GuideLine*))(Il2CppBase() + 0x49C2DB0))(this);
	}

};

}
