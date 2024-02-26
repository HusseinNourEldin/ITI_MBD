function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:33,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:70,type:"fcn"};
this.def["Fact_B"] = {file: "Fact_c.html",line:20,type:"var"};
this.def["Fact_DW"] = {file: "Fact_c.html",line:23,type:"var"};
this.def["Fact_U"] = {file: "Fact_c.html",line:26,type:"var"};
this.def["Fact_Y"] = {file: "Fact_c.html",line:29,type:"var"};
this.def["Fact.c:Fact_M_"] = {file: "Fact_c.html",line:32,type:"var"};
this.def["Fact_M"] = {file: "Fact_c.html",line:33,type:"var"};
this.def["mul_wide_u32"] = {file: "Fact_c.html",line:34,type:"fcn"};
this.def["mul_u32_sat"] = {file: "Fact_c.html",line:68,type:"fcn"};
this.def["Fac_For_Init"] = {file: "Fact_c.html",line:81,type:"fcn"};
this.def["Fac_For"] = {file: "Fact_c.html",line:91,type:"fcn"};
this.def["Fac_Matlab"] = {file: "Fact_c.html",line:114,type:"fcn"};
this.def["Fac_While_Init"] = {file: "Fact_c.html",line:134,type:"fcn"};
this.def["Fac_While"] = {file: "Fact_c.html",line:144,type:"fcn"};
this.def["Fact_step"] = {file: "Fact_c.html",line:171,type:"fcn"};
this.def["Fact_initialize"] = {file: "Fact_c.html",line:205,type:"fcn"};
this.def["Fact_terminate"] = {file: "Fact_c.html",line:239,type:"fcn"};
this.def["B_Fac_For_T"] = {file: "Fact_h.html",line:39,type:"type"};
this.def["DW_Fac_For_T"] = {file: "Fact_h.html",line:44,type:"type"};
this.def["B_Fac_Matlab_T"] = {file: "Fact_h.html",line:49,type:"type"};
this.def["B_Fac_While_T"] = {file: "Fact_h.html",line:54,type:"type"};
this.def["DW_Fac_While_T"] = {file: "Fact_h.html",line:59,type:"type"};
this.def["B_Fact_T"] = {file: "Fact_h.html",line:66,type:"type"};
this.def["DW_Fact_T"] = {file: "Fact_h.html",line:72,type:"type"};
this.def["ExtU_Fact_T"] = {file: "Fact_h.html",line:79,type:"type"};
this.def["ExtY_Fact_T"] = {file: "Fact_h.html",line:86,type:"type"};
this.def["RT_MODEL_Fact_T"] = {file: "Fact_types_h.html",line:22,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:47,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:48,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:60,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:61,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:78,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:83,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:95,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:102,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:109,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:116,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:123,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:130,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:148,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["Fact_c.html"] = "../Fact.c";
	this.html2Root["Fact_c.html"] = "Fact_c.html";
	this.html2SrcPath["Fact_h.html"] = "../Fact.h";
	this.html2Root["Fact_h.html"] = "Fact_h.html";
	this.html2SrcPath["Fact_private_h.html"] = "../Fact_private.h";
	this.html2Root["Fact_private_h.html"] = "Fact_private_h.html";
	this.html2SrcPath["Fact_types_h.html"] = "../Fact_types.h";
	this.html2Root["Fact_types_h.html"] = "Fact_types_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","Fact_c.html","Fact_h.html","Fact_private_h.html","Fact_types_h.html","rtwtypes_h.html"];
