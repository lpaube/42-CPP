/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <louis-philippe.aube@hotmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:15:46 by laube             #+#    #+#             */
/*   Updated: 2021/11/03 21:49:18 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat francis("Francis", 100);
	    std::cout << francis << std::endl;

		    Form form1("Taxes", 100, 50);
			    std::cout << form1 << std::endl;
				    form1.beSigned(francis);
					    std::cout << form1 << std::endl;

						    std::cout << "---" << std::endl;

							    Form form2("NDA", 99, 50);
								    std::cout << form2 << std::endl;
									    try
											    {
													        francis.signForm(form2);
															    }
										    catch(std::exception const &e)
												    {
														        std::cerr << e.what() << std::endl;
																    }
											    std::cout << form2 << std::endl;

												    std::cout << "---" << std::endl;

													    Form form3("Other Paper", 101, 50);
														    std::cout << form3 << std::endl;
															    francis.signForm(form3);
																    std::cout << form3 << std::endl;
																	    try
																			    {
																					        francis.signForm(form3);
																							    }
																		    catch(std::exception const &e)
																				    {
																						        std::cerr << e.what() << std::endl;
																								    }
																			    std::cout << form3 << std::endl;

																				    std::cout << "---" << std::endl;

																					    try
																							    {
																									        Form formException("NDA", 99, 50);
																											        std::cout << formException << std::endl;
																													        formException.beSigned(francis);
																															        std::cout << formException << std::endl;
																																	    }
																						    catch(std::exception const &e)
																								    {
																										        std::cerr << e.what() << std::endl;
																												    }

																							    std::cout << "---" << std::endl;

																								    try
																										    {
																												        Form formException("Important Form", 1000, 50);
																														        std::cout << formException << std::endl;
																																    }
																									    catch(std::exception const &e)
																											    {
																													        std::cerr << e.what() << std::endl;
																															    }

																										    std::cout << "---" << std::endl;

																											    try
																													    {
																															        Form formException("Important Form", 0, 50);
																																	        std::cout << formException << std::endl;
																																			    }
																												    catch(std::exception const &e)
																														    {
																																        std::cerr << e.what() << std::endl;
																																		    }

																													    std::cout << "---" << std::endl;

																														    try
																																    {
																																		        Form formException("Important Form", 100, 1000);
																																				        std::cout << formException << std::endl;
																																						    }
																															    catch(std::exception const &e)
																																	    {
																																			        std::cerr << e.what() << std::endl;
																																					    }

																																    std::cout << "---" << std::endl;

																																	    try
																																			    {
																																					        Form formException("Important Form", 100, 0);
																																							        std::cout << formException << std::endl;
																																									    }
																																		    catch(std::exception const &e)
																																				    {
																																						        std::cerr << e.what() << std::endl;
																																								    }

																																			    return (0);
}
